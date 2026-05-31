#!/usr/bin/env bash
set -euo pipefail

OUT_C="out_c.txt"
OUT_PY="out_python.txt"
OUT_C_CLEAN="out_c_clean.txt"
OUT_PY_CLEAN="out_python_clean.txt"

echo "=== [1/4] C 타겟 컴파일 & 실행 ==="
lfc DeterminismTest_C.lf
./bin/DeterminismTest_C | tee "$OUT_C"

echo ""
echo "=== [2/4] Python 타겟 컴파일 & 실행 ==="
lfc DeterminismTest_Python.lf
python3 src-gen/DeterminismTest_Python/DeterminismTest_Python.py | tee "$OUT_PY"

echo ""
echo "=== [3/4] 정규화 (헤더/타임스탬프 제거) ==="
# step 내용만 추출하고 절대 시간을 상대 시간(오프셋)으로 변환
grep "^\[step" "$OUT_C"  | sed 's/t=[0-9]*/t=T/g' | sed 's/time=[0-9]* ms/time=T ms/g' > "$OUT_C_CLEAN"
grep "^\[step" "$OUT_PY" | sed 's/t=[0-9]*/t=T/g' | sed 's/time=[0-9]* ms/time=T ms/g' > "$OUT_PY_CLEAN"

echo "C 정규화 출력:"
cat "$OUT_C_CLEAN"
echo ""
echo "Python 정규화 출력:"
cat "$OUT_PY_CLEAN"

echo ""
echo "=== [4/4] 결과 비교 ==="
if diff -u "$OUT_C_CLEAN" "$OUT_PY_CLEAN"; then
    echo ""
    echo "✅  PASS: 두 타겟의 동작이 일치합니다 → Determinism 검증 성공"
else
    echo ""
    echo "❌  FAIL: 동작에 차이가 있습니다 → Determinism 불일치 발견"
    exit 1
fi
