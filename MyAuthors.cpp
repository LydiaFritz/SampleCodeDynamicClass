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

MyAuthors::MyAuthors(const MyAuthors& rhs)
{
	//create a new object that is a copy of rhs

	//set capacity
	capacity = rhs.capacity;
	//set count
	count = rhs.count;
	//make the array
	authors = new string[rhs.capacity];

	//copy the authors from rhs to this object
	for (int i = 0; i < count; i++) {
		
		authors[i] = rhs.authors[i];
	}
	cout << "Constructing a new object that is a copy of rhs" << endl;
}

//deallocates any dynamic memory
MyAuthors::~MyAuthors()
{
	delete[] authors;
	//text to illustrate program execution
	// comment out for final run
	cout << "Destructor for MyAuthors called to deallocate dynamic memory." << endl;
}

void MyAuthors::showList() const
{
	//display the authors
	for (int i = 1; i <= count; i++) {
		cout << i << ". " << authors[i - 1] << endl;
	}
}

void MyAuthors::addAuthors(const MyAuthors& rhs)
{
	//add the authors from rhs to this object's authors[]

	//iterate over the authors in rhs
	for (int i = 0; i < rhs.count; i++) {
		//add author rhs[i] to this list
		//use the member function addAuthor
		//addAuthor guarantees the capacity
		addAuthor(rhs.authors[i]);
	}
}

void MyAuthors::addAuthor(string theAuthor)
{
	//is there room for another?
	if (capacity == count)
		resize();
	//add this author to the end of the list
	//count is updated 
	authors[count++] = theAuthor;
}
