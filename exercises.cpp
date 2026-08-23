#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    // ask for name and age of user and print

    std::string name; 
    std::cout << "What is your name? ";
    std::cin >> name; 

    int age; 
    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << name << std::endl; 
    std::cout << age << std::endl;

    // ask user for two integers, add them and print the result

    int num1;
    std::cout << "Enter an integer: ";
    std::cin >> num1;

    int num2;
    std::cout << "Enter a second integer: ";
    std::cin >> num2;

    std::cout << "Sum: " << num1 + num2 << std::endl;

    // create vector of 4 floats, print average - accumulate(list.begin(), list.end(), 0.0)

    std::vector<double> floats = {3.4, 2.5, 10.1, 6.3};
    double sum = accumulate(floats.begin(), floats.end(), 0.0);
    double average = sum / floats.size();
    
    std::cout << "Average: " << average << std::endl;

    return 0;
}
