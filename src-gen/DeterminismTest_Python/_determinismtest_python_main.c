#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/DeterminismTest_Python/DeterminismTest_Python.h"
#include "_determinismtest_python_main.h"
_determinismtest_python_main_main_self_t* new__determinismtest_python_main() {
    _determinismtest_python_main_main_self_t* self = (_determinismtest_python_main_main_self_t*)lf_new_reactor(sizeof(_determinismtest_python_main_main_self_t));

    return self;
}
