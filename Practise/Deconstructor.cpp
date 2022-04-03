//C++ program to demonstrate Deconstructors
//https://www.geeksforgeeks.org/c-classes-and-objects/

#include <bits/stdc++.h>
using namespace std;

class Geeks {
    public: 
        int id;

    //Definition of deconstructor
    ~Geeks() {
        cout<< "Deconstructor is called for id: " <<id << endl;
    }
};

int main() {
    Geeks obj1;
    obj1.id = 7;
    
    for(int i = 0; i <5; i++) {
        Geeks obj2;
        obj2.id = i;
    }
    return 0;
}