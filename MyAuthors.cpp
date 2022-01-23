/*
* Implementation file for MyAuthors
* Lydia K Fritz
* CST-210-SP22
*/

#include <iostream>
#include "MyAuthors.h"


//creates an array with the capacity for 5 authors
MyAuthors::MyAuthors()
{
	//set the capacity
	capacity = 5;
	//set the count
	count = 0;
	//create the list
	authors = new string[capacity];

	//text to illustrate program execution
	// comment out for final run
	cout << "Constructing MyAuthors instance with capacity of " << capacity << endl;
	
}

//deallocates any dynamic memory
MyAuthors::~MyAuthors()
{
	delete[] authors;
	//text to illustrate program execution
	// comment out for final run
	cout << "Destructor for MyAuthors called to deallocate dynamic memory." << endl;
}
