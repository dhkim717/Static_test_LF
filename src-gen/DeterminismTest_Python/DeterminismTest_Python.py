import os
import sys
print("******* Using Python version: %s.%s.%s" % sys.version_info[:3])
sys.path.append(os.path.dirname(__file__))
# List imported names, but do not use pylint's --extension-pkg-allow-list option
# so that these names will be assumed present without having to compile and install.
# pylint: disable=no-name-in-module, import-error
from LinguaFrancaDeterminismTest_Python import (
    Tag, action_capsule_t, port_capsule, request_stop, start
)
# pylint: disable=c-extension-no-member
import LinguaFrancaDeterminismTest_Python as lf
try:
    from LinguaFrancaBase.constants import BILLION, FOREVER, NEVER, instant_t, interval_t
    from LinguaFrancaBase.functions import (
        DAY, DAYS, HOUR, HOURS, MINUTE, MINUTES, MSEC, MSECS, NSEC, NSECS, SEC, SECS, USEC,
        USECS, WEEK, WEEKS
    )
    from LinguaFrancaBase.classes import Make, ReactorBase
except ModuleNotFoundError:
    print("No module named 'LinguaFrancaBase'. "
          "Install using \"pip3 install LinguaFrancaBase\".")
    sys.exit(1)
import copy




# Python class for reactor _determinismtest_python_main
class __determinismtest_python_main(ReactorBase):

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    



# Python class for reactor _sourcea
class __sourcea(ReactorBase):

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

    def reaction_function_0(self, out):
        out.set(1)
        print(f"[step 1] Source A fired at t={lf.time.logical()}")
        return 0

# Python class for reactor _sourceb
class __sourceb(ReactorBase):

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

    def reaction_function_0(self, out):
        out.set(2)
        print(f"[step 1] Source B fired at t={lf.time.logical()}")
        return 0

# Python class for reactor _adder
class __adder(ReactorBase):

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

    def reaction_function_0(self, a, b, sum):
        val_a = a.value if a.is_present else 0
        val_b = b.value if b.is_present else 0
        result = val_a + val_b
        sum.set(result)
        print(f"[step 2] Adder received: a={val_a}, b={val_b}, sum={result}")
        return 0

# Python class for reactor _logger
class __logger(ReactorBase):

    # Constructor
    def __init__(self, **kwargs):
        # Define parameters and their default values
        # Handle parameters that are set in instantiation
        self.__dict__.update(kwargs)
        # Define state variables
    
    @property
    def bank_index(self):
        return self._bank_index # pylint: disable=no-member
    
    

    def reaction_function_0(self, _in):
        ms = lf.time.logical() // 1_000_000
        print(f"[step 3] Logger received sum={_in.value} at logical time={ms} ms\n")
        return 0



# Instantiate classes
determinismtest_python_main_lf = [None] * 1
determinismtest_python_a_lf = [None] * 1
determinismtest_python_b_lf = [None] * 1
determinismtest_python_add_lf = [None] * 1
determinismtest_python_log_lf = [None] * 1
# Start initializing DeterminismTest_Python of class _determinismtest_python_main
for determinismtest_python_main_i in range(1):
    bank_index = determinismtest_python_main_i
    determinismtest_python_main_lf[0] = __determinismtest_python_main(
        _bank_index = 0,
    )
    self = determinismtest_python_main_lf[0]
    # Start initializing DeterminismTest_Python.a of class _sourcea
    for determinismtest_python_a_i in range(1):
        bank_index = determinismtest_python_a_i
        determinismtest_python_a_lf[0] = __sourcea(
            _bank_index = 0,
        )
    # Start initializing DeterminismTest_Python.b of class _sourceb
    for determinismtest_python_b_i in range(1):
        bank_index = determinismtest_python_b_i
        determinismtest_python_b_lf[0] = __sourceb(
            _bank_index = 0,
        )
    # Start initializing DeterminismTest_Python.add of class _adder
    for determinismtest_python_add_i in range(1):
        bank_index = determinismtest_python_add_i
        determinismtest_python_add_lf[0] = __adder(
            _bank_index = 0,
        )
    # Start initializing DeterminismTest_Python.log of class _logger
    for determinismtest_python_log_i in range(1):
        bank_index = determinismtest_python_log_i
        determinismtest_python_log_lf[0] = __logger(
            _bank_index = 0,
        )


# The main function
def main(argv):
    start(argv)
    # Suppress Python shutdown errors
    # Workaround for https://github.com/lf-lang/lingua-franca/issues/1906
    import atexit
    atexit.register(os._exit, 0)

# As is customary in Python programs, the main() function
# should only be executed if the main module is active.
if __name__=="__main__":
    main(sys.argv)
