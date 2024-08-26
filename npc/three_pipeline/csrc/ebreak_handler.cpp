#include <iostream>
#include <svdpi.h>


 bool simulation_end = false;

 extern "C" void handle_ebreak() {
     std::cout << "ebreak instruction encountered! Ending simulation." << std::endl;
         simulation_end = true;
 }
