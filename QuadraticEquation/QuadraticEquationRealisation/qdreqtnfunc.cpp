#include "qdreqtnheader.h"
#include <cmath>
namespace QdrEqtn {


double disc(double x, double y, double z)
{
    double discr;
    discr = (y*y)-(4*x*z);
    return discr;
}

double sqrt1(double x, double y, double z)
{
    double sqr;
     sqr=sqrt(disc(x,y,z));
            return sqr;
}

double result(double x, double y, double z)
{
    double res;
    if (disc(x,y,z)==0)
    {
        res=((-y)+sqrt1(x,y,z))/(2*x);
    }
    return res;
}

double result1(double x,double y, double z)
{
    double res;
    if (disc(x,y,z)>0)
    {
       res=((-y)-sqrt1(x,y,z))/(2*x);
    }
    return res;
}

double result2(double x,double y, double z)
{
    double res;
    if (disc(x,y,z)>0)
    {
       res=((-y)+sqrt1(x,y,z))/(2*x);
    }
    return res;
}
}//namespace QdrEqtn
