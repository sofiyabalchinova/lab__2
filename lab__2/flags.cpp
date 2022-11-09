#include <iostream>
#include <cstring>
#include "Header.h"
int main(int argc, char **argv){
    if (argc==1){
        std::cerr << "Nothing was read!\n";
        return EXIT_FAILURE;
    }
    bool forward=false;
    for(int i = 1; i < argc; i++){
        if(strcmp(argv[i], "--forward") == 0) forward = true;
        else
        {
            std::cerr << "The flag was enterd incorrectly" << argv[i] <<std::endl;
            return EXIT_FAILURE;
        }
    }
    if(forward)
        math();
    else
        std::cerr<<"Error";
    return EXIT_SUCCESS;

}
