#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/DeterminismTest_C/DeterminismTest_C.h"
#include "_determinismtest_c_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
_determinismtest_c_main_main_self_t* new__determinismtest_c_main() {
    _determinismtest_c_main_main_self_t* self = (_determinismtest_c_main_main_self_t*)lf_new_reactor(sizeof(_determinismtest_c_main_main_self_t));

    return self;
}
