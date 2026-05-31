#ifndef _SOURCEA_H
#define _SOURCEA_H
#include "include/core/reactor.h"
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
typedef generic_port_instance_struct _sourcea_out_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
#line 21 "/home/csm126/lf-test/src-gen/DeterminismTest_Python/_sourcea.h"
#line 22 "/home/csm126/lf-test/src-gen/DeterminismTest_Python/_sourcea.h"
    _sourcea_out_t _lf_out;
    int _lf_out_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
} _sourcea_self_t;
_sourcea_self_t* new__sourcea();
#endif // _SOURCEA_H
