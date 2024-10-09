#ifndef STACK_H
#define STACK_H
#include "Book.h"
#include <string>
#include <iostream>

using namespace std;

class Stack
{
	private:
		static const int MAX_SIZE = 100; // Maximum size of the stack
		Book* stackArray; // Dynamic array to store books
		int top; // Index of the top of the stack
		string stackName;

	public:
		// Constructor and destructor
		Stack();
		~Stack();

		// Stack operations
		void push(const Book& book);
		void pop();
		Book topBook() const;
		bool isEmpty() const;
		string getStackName() const;
		Stack(const string& name);
};

#endif // STACK_H
