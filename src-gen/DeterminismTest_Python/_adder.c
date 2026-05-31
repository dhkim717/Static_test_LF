#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/DeterminismTest_Python/Adder.h"
#include "_adder.h"
#include "include/api/reaction_macros.h"
void _adderreaction_function_0(void* instance_args){
    _adder_self_t* self = (_adder_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _adder_a_t* a = self->_lf_a;
    int a_width = self->_lf_a_width; SUPPRESS_UNUSED_WARNING(a_width);
    _adder_b_t* b = self->_lf_b;
    int b_width = self->_lf_b_width; SUPPRESS_UNUSED_WARNING(b_width);
    _adder_sum_t* sum = &self->_lf_sum;
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    
    
    LF_PRINT_DEBUG("Calling reaction function _adder.reaction_function_0");
    PyObject *arglist = Py_BuildValue("(OOO)", convert_C_port_to_py(a, a_width), convert_C_port_to_py(b, b_width), convert_C_port_to_py(sum, -2));
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        arglist
    );
    Py_DECREF(arglist);
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction _adder.reaction_function_0 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        exit(1);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
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
    self->_lf__a.tmplt.type.element_size = sizeof(PyObject);
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
    self->_lf__b.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
