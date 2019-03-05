#include <palindromheader.h>
namespace palindom {
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
}//namespace palindrom
