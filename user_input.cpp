#include <iostream>

int main()
{
    std::string user_name; // can be string/int/double/etc. 
    std::cout << "What is your name? ";
    std::cin >> user_name; // request user input

    std::cout << user_name << std::endl; // print user input (ctrl + c to terminate without inputting)

    return 0;
}
