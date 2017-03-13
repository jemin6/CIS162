#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
// This class models a triangle
class Triangle
{
    private:
    int length1;
    int length2;
    int length3;

    public:
    // Constructors
    Triangle() { length1 = 3; length2 = 4; length3 =5;}
    Triangle(int a, int b, int c) { length1 = a; length2 = b; length3 = c;}

    // Accessors and mutators
    int getA() {return length1;}
    int getB() {return length2;}
    int getC() {return length3;}
    void setA(int a) {length1 = a;}
    void setB(int b) {length2 = b;}
    void setC(int c) {length3 = c;}

    // Processing
    bool isEquilateral();
    bool isScalene();
    bool isIsosceles();
    bool isRight();

};

#endif // TRIANGLE_H

