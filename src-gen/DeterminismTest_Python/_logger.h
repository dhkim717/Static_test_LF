#ifndef _LOGGER_H
#define _LOGGER_H
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
typedef generic_port_instance_struct _logger__in_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
#line 21 "/home/csm126/lf-test/src-gen/DeterminismTest_Python/_logger.h"
#line 22 "/home/csm126/lf-test/src-gen/DeterminismTest_Python/_logger.h"
    _logger__in_t* _lf__in;
    // width of -2 indicates that it is not a multiport.
    int _lf__in_width;
    // Default input (in case it does not get connected)
    _logger__in_t _lf_default___in;
    reaction_t _lf__reaction_0;
    trigger_t _lf___in;
    reaction_t* _lf___in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _logger_self_t;
_logger_self_t* new__logger();
#endif // _LOGGER_H
