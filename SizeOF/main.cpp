#include <iostream>
#include <cstddef>

int main()
{
    std::cout << "size of INT is " << sizeof (int) << " bytes" << std::endl;
    std::cout << "size of BOOL is " << sizeof (bool) << " bytes" << std::endl;
    std::cout << "size of CHAR is " << sizeof (char) << " bytes" << std::endl;
    std::cout << "size of SIGNED CHAR is " << sizeof (signed char) << " bytes" << std::endl;
    std::cout << "size of UNSIGNED CHAR is " << sizeof (unsigned char) << " bytes" << std::endl;
    std::cout << "size of WCHAR_T is " << sizeof (wchar_t) << " bytes" << std::endl;
    std::cout << "size of CHAR16_T is " << sizeof (char16_t) << " bytes" << std::endl;
    std::cout << "size of CHAR32_T is " << sizeof (char32_t) << " bytes" << std::endl;
    std::cout << "size of SHORT is " << sizeof (short) << " bytes" << std::endl;
    std::cout << "size of UNSIGNED SHORT is " << sizeof (unsigned short) << " bytes" << std::endl;
    std::cout << "size of UNSIGNED INT is " << sizeof (unsigned int) << " bytes" << std::endl;
    std::cout << "size of LONG is " << sizeof (long) << " bytes" << std::endl;
    std::cout << "size of UNSIGNED LONG is " << sizeof (unsigned long) << " bytes" << std::endl;
    std::cout << "size of LONG LONG is " << sizeof (long long) << " bytes" << std::endl;
    std::cout << "size of UNSIGNED LONG LONG is " << sizeof (unsigned long long) << " bytes" << std::endl;
    std::cout << "size of FLOAT is " << sizeof (float) << " bytes" << std::endl;
    std::cout << "size of DOUBLE is " << sizeof (double) << " bytes" << std::endl;
    std::cout << "size of LONG DOUBLE is " << sizeof (long double) << " bytes" << std::endl;


    return 0;
}
