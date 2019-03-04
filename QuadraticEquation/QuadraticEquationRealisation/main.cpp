#include "qdreqtnheader.h"
#include <iostream>
#include <iomanip>

int main()
{
    double a,b,c;
    int k;
    std::cout << "ведите коэфициэнты квадратного уравнения Ax^2+Bx+C=0" << std::endl;
    std::cout << "введите A\n" << "A=";
    std::cin >> a;
    std::cout << "введите B\n" << "B=";
    std::cin >> b;
    std::cout << "введите C\n" << "C=";
    std::cin >> c;
    std::cout << "введите количество цифр после запятой в ответе " << std::endl;
    std::cin >> k;
    std::cout << a << "x^2+" << b << "y+" << c << "=0" <<std::endl;
    std::cout << "discriminant=" << QdrEqtn::disc(a,b,c) << std::endl;
    std::cout << "sqrt from discriminant=" << QdrEqtn::sqrt1(a,b,c) << std::endl;
    if (QdrEqtn::disc(a,b,c)==0)
    {
    std::cout << std::fixed << std::setprecision(k) << "x= " << QdrEqtn::result(a,b,c) << std::endl;
    }
    if(QdrEqtn::disc(a,b,c)>0)
    {
        std::cout << std::fixed << std::setprecision(k) << "X1= " << QdrEqtn::result1(a,b,c) << '\n' << "X2= " << QdrEqtn::result2(a,b,c) << std::endl;
    }
    if(QdrEqtn::disc(a,b,c)<0)
    {
        std::cout << "дискриминант меньше нуля, корней нет" << std::endl;
    }
    return 0;
}
