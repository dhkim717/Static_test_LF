#include "include/api/schedule.h"
#include <string.h>
#include "low_level_platform/api/low_level_platform.h"
#include "include/DeterminismTest_Python/Logger.h"
#include "_logger.h"
#include "include/api/reaction_macros.h"
void _loggerreaction_function_0(void* instance_args){
    _logger_self_t* self = (_logger_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _logger__in_t* _in = self->_lf__in;
    int _in_width = self->_lf__in_width; SUPPRESS_UNUSED_WARNING(_in_width);
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();
    
    LF_PRINT_DEBUG("Calling reaction function _logger.reaction_function_0");
    PyObject *arglist = Py_BuildValue("(O)", convert_C_port_to_py(_in, _in_width));
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        arglist
    );
    Py_DECREF(arglist);
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction _logger.reaction_function_0 failed.");
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
_logger_self_t* new__logger() {
    _logger_self_t* self = (_logger_self_t*)lf_new_reactor(sizeof(_logger_self_t));
    // Set input by default to an always absent default input.
    self->_lf__in = &self->_lf_default___in;
    // Set the default source reactor pointer
    self->_lf_default___in._base.source_reactor = (self_base_t*)self;
    self->_lf__reaction_0.number = 0;
    self->_lf__reaction_0.function = _loggerreaction_function_0;
    self->_lf__reaction_0.self = self;
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    self->_lf__reaction_0.STP_handler = NULL;
    self->_lf__reaction_0.name = "?";
    self->_lf__reaction_0.mode = NULL;
    self->_lf___in.last_tag = NEVER_TAG;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf___in.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf___in_reactions[0] = &self->_lf__reaction_0;
    self->_lf___in.reactions = &self->_lf___in_reactions[0];
    self->_lf___in.number_of_reactions = 1;
    #ifdef FEDERATED
    self->_lf___in.physical_time_of_arrival = NEVER;
    #endif // FEDERATED
    self->_lf___in.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
