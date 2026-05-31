#ifndef _SOURCEA_H
#define _SOURCEA_H
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
} _sourcea_out_t;
typedef struct {
    struct self_base_t base;
#line 22 "/home/csm126/lf-test/src-gen/DeterminismTest_C/_sourcea.h"
#line 23 "/home/csm126/lf-test/src-gen/DeterminismTest_C/_sourcea.h"
    _sourcea_out_t _lf_out;
    int _lf_out_width;
    reaction_t _lf__reaction_0;
    trigger_t _lf__t;
    reaction_t* _lf__t_reactions[1];
} _sourcea_self_t;
_sourcea_self_t* new__sourcea();
#endif // _SOURCEA_H
