#include "powdefenition.h"

#include <cassert>
namespace Power  {

type Power_function(type base, type power)
{

    type result{1.0};
    if(power == 0.0)
    {
        result = 1;
    }

    if(power == 1.0)
    {
        result = base;
    }

    if(power > 1.0)
    {
        for (int i{0}; i<power; i++)
        {
            result *= base;
        }
    }


    if(power < 0)
    {
        power = -power;
        type temporary_result{1.0};
        for(int j{0}; j < power; j++)
        {
            temporary_result *= base;
        }
        result = 1 / temporary_result;
    }

    return result;
}

void Test()
{
    assert(Power::Power_function(2, 2) == 4);
    assert(Power::Power_function(2, 0) == 1);
    assert(Power::Power_function(2, (-1)) == 0.5);
    assert(Power::Power_function(0, 9) == 0);
    assert(Power::Power_function(2, 1) == 2);
    assert(Power::Power_function((-2), 3) == (-8));
}

}// namespace PowerFunction
