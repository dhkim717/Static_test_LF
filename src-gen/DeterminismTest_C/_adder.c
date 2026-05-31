#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/DeterminismTest_C/Adder.h"
#include "_adder.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _adderreaction_function_0(void* instance_args) {
    _adder_self_t* self = (_adder_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _adder_a_t* a = self->_lf_a;
    int a_width = self->_lf_a_width; SUPPRESS_UNUSED_WARNING(a_width);
    _adder_b_t* b = self->_lf_b;
    int b_width = self->_lf_b_width; SUPPRESS_UNUSED_WARNING(b_width);
    _adder_sum_t* sum = &self->_lf_sum;
    #line 29 "/home/csm126/lf-test/DeterminismTest_C.lf"
    int val_a = a->is_present ? a->value : 0;
    int val_b = b->is_present ? b->value : 0;
    int result = val_a + val_b;
    lf_set(sum, result);
    printf("[step 2] Adder received: a=%d, b=%d, sum=%d\n", val_a, val_b, result);
#line 23 "/home/csm126/lf-test/src-gen/DeterminismTest_C/_adder.c"
}
#include "include/api/reaction_macros_undef.h"
_adder_self_t* new__adder() {
    _adder_self_t* self = (_adder_self_t*)lf_new_reactor(sizeof(_adder_self_t));
    // Set input by default to an always absent default input.
    self->_lf_a = &self->_lf_default__a;
    // Set the default source reactor pointer
    self->_lf_default__a._base.source_reactor = (self_base_t*)self;
    // Set input by default to an always absent default input.
    self->_lf_b = &self->_lf_default__b;
    // Set the default source reactor pointer
    self->_lf_default__b._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _adderreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__a.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__a.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__a_reactions[0] = &self->_lf__reaction_0;
    self->_lf__a.reactions = &self->_lf__a_reactions[0];
    self->_lf__a.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__a.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__a.tmplt.type.element_size = sizeof(int);
    self->_lf__b.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__b.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__b_reactions[0] = &self->_lf__reaction_0;
    self->_lf__b.reactions = &self->_lf__b_reactions[0];
    self->_lf__b.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__b.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__b.tmplt.type.element_size = sizeof(int);
    return self;
}
