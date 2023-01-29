#include <iostream>

#include "general_stochastic_scheduler.hpp"
#include "osco_data_structures.hpp"

int main(int argc, char const *argv[])
{
    /* code */
    std::cout << OSCO::add(2.0,3.0) << std::endl;

    auto mySchdedule = OSCO::Schedule<int>();
    return 0;
}
