#ifndef _LOGGER_H
#define _LOGGER_H
#include "include/core/reactor.h"

typedef struct {
    token_type_t type;
    lf_token_t* token;
    size_t length;
    bool is_present;
    lf_port_internal_t _base;
    int value;
    #ifdef FEDERATED
    #ifdef FEDERATED_DECENTRALIZED
    tag_t intended_tag;
    #endif
    interval_t physical_time_of_arrival;
    #endif
} _logger_in_t;
typedef struct {
    struct self_base_t base;
#line 22 "/home/csm126/lf-test/src-gen/DeterminismTest_C/_logger.h"
#line 23 "/home/csm126/lf-test/src-gen/DeterminismTest_C/_logger.h"
    _logger_in_t* _lf_in;
    // width of -2 indicates that it is not a multiport.
    int _lf_in_width;
    // Default input (in case it does not get connected)
    _logger_in_t _lf_default__in;
    reaction_t _lf__reaction_0;
    trigger_t _lf__in;
    reaction_t* _lf__in_reactions[1];
    #ifdef FEDERATED
    
    #endif // FEDERATED
} _logger_self_t;
_logger_self_t* new__logger();
#endif // _LOGGER_H
