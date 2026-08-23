#include <iostream>
#include <vector>

int main()
{
    double temperature_list[4] = {34.5, 27.8, 26.8, 22.0}; // cannot have more than 4 elements
    std::cout << temperature_list[1] << std::endl; // max index is 3

    std::cout << temperature_list[3] << std::endl; // before
    temperature_list[3] = 15.4; // modify value
    std::cout << temperature_list[3] << std::endl; // after

    // vector array - dynamic size
    std::vector<double> temperatures = {34.5, 27.8, 26.8};  
    std::cout << temperatures.at(0) << std::endl; // access 1st element
    
    std::cout << temperatures.at(1) << std::endl; // before
    temperatures.at(1) = 30.7; // modify value
    std::cout << temperatures.at(1) << std::endl; // after

    std::cout << temperatures.size() << std::endl; // size of vector

    temperatures.push_back(17.4); // add element to vector array
    std::cout << temperatures.size() << std::endl;

    return 0;
}