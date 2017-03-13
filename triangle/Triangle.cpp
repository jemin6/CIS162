#include "Triangle.h"
#include <cmath>

bool Triangle::isEquilateral()
{
    return length1 == length2 && length2 == length3;
}
bool Triangle::isScalene()
{
    return length1 != length2 && length2 != length3;
}
bool Triangle::isIsosceles()
{
    return length1 == length2 || length2 == length3 || length1 == length3;
}
bool Triangle::isRight()
{
    return length3 == sqrt(length1 * length1 + length2 *length2) || length2 == sqrt(length1*length1 + length3 * length3)
            || length1 == sqrt(length2*length2 + length3*length3) ;
}

