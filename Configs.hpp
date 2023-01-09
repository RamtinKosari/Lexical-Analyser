# ifndef CONFIGS
    # define CONFIGS
    //-- Dictionary Configs
    # ifndef __RKL_DICTIONARY
        # define loaded true
    # endif // __RKL_DICTIONARY
    //-- Needed Libraries
    # include <iostream>
    # include <dirent.h>
    # include <fstream>
    # include <string>
    //-- Log States Configs
    //-1 Just Error Logs
    //-2 Error Logs with Detected Strings
    # define DEFAULT_LOG 2
# endif // CONFIGS