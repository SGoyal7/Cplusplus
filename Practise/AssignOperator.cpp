//Assign operator(=) is by default available in all user defined classes even if 
//user has not implemented. The default assignement does shallow copy. 
//But comparison operator "==" is not overloaded.

#include<iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)  {real = r;   imag = i;}
};

int main()
{
    Complex c1(10, 5), c2(2, 4);

    // For example, below code works fine
    c1 = c2;

    // But this code throws compiler error
    if (c1 == c2)
       cout << "Same";

    return 0;
}