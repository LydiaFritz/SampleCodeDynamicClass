/*
* Implementation file for MyAuthors
* Lydia K Fritz
* CST-210-SP22
*/

#include <iostream>
#include "MyAuthors.h"

//private utility function to ensure the 
//authors is large enough
void MyAuthors::resize()
{
	if (capacity == count) {
		//authors[] is full
		
		//double the capacity and
		//make a new one that is twice as large
		capacity *= 2;
		string* copy = new string[capacity];
		
		//copy the elements from the current array to the new space
		for (int i = 0; i < count; i++) {
			copy[i] = authors[i];
		}

		//destroy the old one
		delete[] authors;

		//update the pointer authors[] to reference the new one
		authors = copy;
		
	}
}

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
