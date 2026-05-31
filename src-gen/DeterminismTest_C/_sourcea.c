#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/DeterminismTest_C/SourceA.h"
#include "_sourcea.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _sourceareaction_function_0(void* instance_args) {
    _sourcea_self_t* self = (_sourcea_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _sourcea_out_t* out = &self->_lf_out;
    #line 10 "/home/csm126/lf-test/DeterminismTest_C.lf"
    lf_set(out, 1);
    printf("[step 1] Source A fired at t=%lld\n", lf_time_logical());
#line 16 "/home/csm126/lf-test/src-gen/DeterminismTest_C/_sourcea.c"
}
#include "include/api/reaction_macros_undef.h"
_sourcea_self_t* new__sourcea() {
    _sourcea_self_t* self = (_sourcea_self_t*)lf_new_reactor(sizeof(_sourcea_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _sourceareaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__t.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__t_reactions[0] = &self->_lf__reaction_0;
    self->_lf__t.reactions = &self->_lf__t_reactions[0];
    self->_lf__t.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__t.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__t.is_timer = true;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__t.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    return self;
}
