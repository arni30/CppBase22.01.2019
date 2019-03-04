#include "powdefenition.h"
#include <iostream>
#include <iomanip>
#include <cassert>




int main()
{
    type base{}, power{};
    Power::Test();
    int number_of_digits_after_comma;
    std::cout << "Enter the NUMBER" << std::endl;
    std::cin >> base;
    std::cout << "Enter the POWER" << std::endl;
    std::cin >> power;
    std::cout << "введите количиство цыфр после запятой" << std::endl;
    std::cin >> number_of_digits_after_comma;
    Power::Power_function(base, power);


    std::cout << std::fixed << std::setprecision(number_of_digits_after_comma) << Power::Power_function(base, power) << std::endl;


    return 0;
}
