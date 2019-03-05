#include "palindromheader.h"
#include <iostream>
#include <cassert>
#include <string>



int main()
{
    std::string word;
    std:: cout << "ввидите число или слово" << std::endl;
    std:: cin >> word;
    assert(palindom::PalindromFoo("abcba")==true);
    assert(palindom::PalindromFoo("12321")==true);
    assert(palindom::PalindromFoo("1234")==false);
    if(palindom::PalindromFoo(word)==true)
    {
        std:: cout << "это палиндром" << std:: endl;
    }
    else
    {
        std:: cout << "это не палиндром" << std::endl;
 }



    return 0;
}

