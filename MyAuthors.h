#ifndef MY_AUTHORS_H
#define MY_AUTHORS_H

#include <string>

using namespace std;

/*
* MyAuthors organizes a lists of authors
* for a library
*/
class MyAuthors {
private:
	string* authors;
	//the capacity of authors[]
	int capacity;
	//number of authors currently in the list
	int count;

	//function to 'resize' the list
	void resize();

public:
	//constructor
	//creates an array with the capacity for 5 authors
	MyAuthors();
	//copy constructor
	//creates an array with the same content as the parameter rhs 
	MyAuthors(const MyAuthors& rhs);
	//destructor
	//destroys dynamic data
	//~MyAuthors();
	//display the list of authors
	void showList()const;
	//add the authors from rhs to this object
	void addAuthors(const MyAuthors& rhs);

};

#endif
