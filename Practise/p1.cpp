//program to get the size of empty class

#include <iostream>

using namespace std;

//Empty class
class EmptyClass{

};

//Empty class that contains only function
class EmptyClassWithFunctions{

	public: 
        void display(){
	    }
};

int main(){

	EmptyClass obj1;
	EmptyClass obj2;
     
	if (&obj1 == &obj2){
		 cout << "Both object have same address" << endl;
	}else{
		cout << "Both object have unique address" << endl;
	}   	

	return 0;
}