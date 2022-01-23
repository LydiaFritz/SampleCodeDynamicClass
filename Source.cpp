//Lydia K Fritz
//CST-210-SP22

/*
* this project contains a dynamic class.
* A dynamic class is a class that has one or more instance variables
* that are dynamically allocated.  This means that the constructor uses the 
* new operator to request dynamic data.  
* 
* A dynamic class must have a user-defined destructor.
* A user-defined destructor is called every time an instance of the class is
* destroyed.  
* 
* This class also contains a copy constructor.  
* A copy constructor is required so that when a new instance of the class
* is initialized with an existing instance of the class, dynamic data can
* be copied to the new object.
* 
* The class, MyAuthors.cpp, contains comments explaining each of the above methods 
* in detail.
*/

#include <iostream>
#include <string>
#include "MyAuthors.h"

using namespace std;

int main() {

	MyAuthors authorList;

	return 0;
}