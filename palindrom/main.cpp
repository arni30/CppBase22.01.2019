#include <iostream>
#include <cassert>
#include <string>

bool PalindromFoo(std::string WordForCheck);

int main()
{
    std::string word;
    std:: cout << "ввидите число или слово" << std::endl;
    std:: cin >> word;
    if(PalindromFoo(word)==true)
    {
        std:: cout << "это палиндром" << std:: endl;
    }
    else
    {
        std:: cout << "это не палиндром" << std::endl;
 }
    assert(PalindromFoo("addc")==true);
    assert(PalindromFoo("12321")==true);
    assert(PalindromFoo("1234")==false);


    return 0;
}

bool PalindromFoo(std::string WordForCheck)
{
    int length =WordForCheck.length();
       for(int i=0;i<length/2;i++)
       {
           if(WordForCheck[i]==WordForCheck[length-i-1])
              {
                   return true;
           }
           else
           {
               return false;
           }
       }

   }
