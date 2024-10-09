#include "Stack.h"
#include "Book.h" // Include the Book class
#include <iostream>

// Constructor
Stack::Stack() : top(-1)
{
	stackArray = new Book[MAX_SIZE]; // Allocate memory for the stack array
}

Stack::Stack(const std::string& name) : stackName(name) { }
// Destructor
Stack::~Stack()
{
	delete[] stackArray; // Deallocate memory when the stack is destroyed
}

// Push operation
void Stack::push(const Book& book)
{
	if (top < MAX_SIZE - 1)
	{
		top++;
		stackArray[top] = book;
	}
	else
	{
		std::cerr << "Stack overflow! Cannot push more books onto the stack." << std::endl;
	}
}

// Pop operation
void Stack::pop()
{
	if (top >= 0)
	{
		top--;
	}
	else
	{
		std::cerr << "Stack underflow! Cannot pop from an empty stack." << std::endl;
	}
}

// Get the top book
Book Stack::topBook() const
{
	if (top >= 0)
	{
		return stackArray[top];
	}
	else
	{
		std::cerr << "Cannot get top book from an empty stack." << std::endl;
		return Book(); // Return a default-constructed Book object
	}
}

string Stack::getStackName() const
{
	return stackName;
}
// Check if the stack is empty
bool Stack::isEmpty() const
{
	return top == -1;
}
