#ifndef _ADDER_H
#define _ADDER_H
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
typedef generic_port_instance_struct _adder_a_t;
typedef generic_port_instance_struct _adder_b_t;
typedef generic_port_instance_struct _adder_sum_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
#line 23 "/home/csm126/lf-test/src-gen/DeterminismTest_Python/_adder.h"
#line 24 "/home/csm126/lf-test/src-gen/DeterminismTest_Python/_adder.h"
    _adder_a_t* _lf_a;
    // width of -2 indicates that it is not a multiport.
    int _lf_a_width;
    // Default input (in case it does not get connected)
    _adder_a_t _lf_default__a;
    _adder_b_t* _lf_b;
    // width of -2 indicates that it is not a multiport.
    int _lf_b_width;
    // Default input (in case it does not get connected)
    _adder_b_t _lf_default__b;
    _adder_sum_t _lf_sum;
    int _lf_sum_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__a;
    reaction_t* _lf__a_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
    trigger_t _lf__b;
    reaction_t* _lf__b_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _adder_self_t;
_adder_self_t* new__adder();
#endif // _ADDER_H
