#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/DeterminismTest_C/Logger.h"
#include "_logger.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _loggerreaction_function_0(void* instance_args) {
    _logger_self_t* self = (_logger_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _logger_in_t* in = self->_lf_in;
    int in_width = self->_lf_in_width; SUPPRESS_UNUSED_WARNING(in_width);
    #line 40 "/home/csm126/lf-test/DeterminismTest_C.lf"
    long long ms = lf_time_logical() / 1000000LL;
    printf("[step 3] Logger received sum=%d at logical time=%lld ms\n\n", in->value, ms);
#line 17 "/home/csm126/lf-test/src-gen/DeterminismTest_C/_logger.c"
}
#include "include/api/reaction_macros_undef.h"
_logger_self_t* new__logger() {
    _logger_self_t* self = (_logger_self_t*)lf_new_reactor(sizeof(_logger_self_t));
    // Set input by default to an always absent default input.
    self->_lf_in = &self->_lf_default__in;
    // Set the default source reactor pointer
    self->_lf_default__in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _loggerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf__in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__in_reactions[0] = &self->_lf__reaction_0;
    self->_lf__in.reactions = &self->_lf__in_reactions[0];
    self->_lf__in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf__in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf__in.tmplt.type.element_size = sizeof(int);
    return self;
}
