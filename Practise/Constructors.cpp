//C++ program to demonstrate constructors
//https://www.geeksforgeeks.org/c-classes-and-objects/

#include <bits/stdc++.h>
using namespace std;

class Geeks {
    public:
    int id;

    //default constructor
    Geeks() {
        cout << "Default constructor is called" <<endl;
        id = -1;
    }

    //parameterized cobnstructor
    Geeks(int x) {
        cout << "Paramaterized constructor is called"<<endl;
        id = x;
    }

};

int main() {

    Geeks obj1;
    cout<< "Id: " << obj1.id << endl;

    Geeks obj2(21);
    cout<< "Id: " << obj2.id <<endl;
    return 0;
}

