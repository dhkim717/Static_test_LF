#ifndef _DETERMINISMTEST_PYTHON_MAIN_H
#define _DETERMINISMTEST_PYTHON_MAIN_H
#include "include/core/reactor.h"
#include "_sourceb.h"
#include "_logger.h"
#include "_sourcea.h"
#include "_adder.h"
#include "pythontarget.h"
#include <limits.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/api/schedule.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
typedef struct {
    struct self_base_t base;
    char *_lf_name;
#line 23 "/home/csm126/lf-test/src-gen/DeterminismTest_Python/_determinismtest_python_main.h"
#line 24 "/home/csm126/lf-test/src-gen/DeterminismTest_Python/_determinismtest_python_main.h"
} _determinismtest_python_main_main_self_t;
_determinismtest_python_main_main_self_t* new__determinismtest_python_main();
#endif // _DETERMINISMTEST_PYTHON_MAIN_H
