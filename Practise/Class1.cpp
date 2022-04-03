// C++ program to demonstrate function declaration outside class
//https://www.geeksforgeeks.org/c-classes-and-objects/

#include <bits/stdc++.h>
using namespace std;

class Geeks {
    public:
        string name;
        int id;

    //function is not defined inside class definition
    void printname();

    //fuunction is defined inside class definition
    void printid() {
        cout << "Id is: "<<id <<endl;
    }
};

//definition of function using scope resolution operator ::
void Geeks::printname() {
    cout << "Name is: " << name<<endl;
}

int main() {
    Geeks obj;

    obj.name = "x";
    obj.id = 15;

    obj.printname();
    obj.printid();
    return 0;
}