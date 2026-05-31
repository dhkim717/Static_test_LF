#ifndef _ADDER_H
#define _ADDER_H
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
} _adder_a_t;
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
} _adder_b_t;
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
} _adder_sum_t;
typedef struct {
    struct self_base_t base;
#line 50 "/home/csm126/lf-test/src-gen/DeterminismTest_C/_adder.h"
#line 51 "/home/csm126/lf-test/src-gen/DeterminismTest_C/_adder.h"
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
