#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/HelloWorld_C/HelloWorld_C.h"
#include "_helloworld_c_main.h"
// ***** Start of method declarations.
// ***** End of method declarations.
#include "include/api/reaction_macros.h"
void _helloworld_c_mainreaction_function_0(void* instance_args) {
    _helloworld_c_main_main_self_t* self = (_helloworld_c_main_main_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    
    #line 8 "/home/csm126/lf-test/HelloWorld_C.lf"
    printf("Hello World from C!\n");
#line 15 "/home/csm126/lf-test/src-gen/HelloWorld_C/_helloworld_c_main.c"
}
#include "include/api/reaction_macros_undef.h"
_helloworld_c_main_main_self_t* new__helloworld_c_main() {
    _helloworld_c_main_main_self_t* self = (_helloworld_c_main_main_self_t*)lf_new_reactor(sizeof(_helloworld_c_main_main_self_t));
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _helloworld_c_mainreaction_function_0;
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
