#include <iostream>

int a;

int main()
{
    a = 2;
    std::cout << a << std::endl;
    int b = 2 + 3;
    std::cout << b << std::endl;
    int c = a * b;
    std::cout << c << std::endl;
    a = 0;
    std::cout << c << std::endl; // still 10, as c was already compiled before value of a changed

    // variables

    int user_age = 34;
    double temperature = 20.6;
    bool is_alive = true; // 0 if true, 1 if false
    std::string user_name = "Bob";

    std::cout << user_age << std::endl;
    std::cout << temperature << std::endl;
    std::cout << is_alive << std::endl;
    std::cout << user_name << std::endl;

    // constants

    const int seconds_per_hour = 3600; // must be declared and initialized on the same line
    const double max_allowed_temperature = 76.8;

    std::cout << seconds_per_hour << std::endl;
    std::cout << max_allowed_temperature << std::endl;

    // seconds_per_hour = 3 (will fail because seconds_per_hour is a constant and cannot be modified)

    return 0;
}
