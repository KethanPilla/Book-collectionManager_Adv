#include<iostream>
#include "IntendToRead.h"
#include <fstream> // Include for file operations 

// Include the List class
#include "List.h"
#include "Stack.h"

using namespace std;

// Constructor
IntendToRead::IntendToRead() : activeStack(nullptr) {}

// Destructor
IntendToRead::~IntendToRead()
{
}

List& IntendToRead::getList()
{
	return stacks;
}

// Create a new stack
void IntendToRead::createStack(const std::string& stackName)
{
	getList().addStack(stackName);
	activeStack = getList().getActiveStack();
}

// Delete a stack
void IntendToRead::deleteStack(int stackNumber)
{
	getList().removeStack(stackNumber);
	activeStack = getList().getActiveStack();
}

// Print the names of all stacks
void IntendToRead::printStackNames() const
{
	getStacks().printListNames();
}

// Update the active stack
void IntendToRead::updateActiveStack(int stackNumber)
{
	getStacks().updateActiveStack(stackNumber);
	activeStack = getStacks().getActiveStack();
}


// Load books from a file
void IntendToRead::loadBooksFromFile(const std::string& fileName)
{
	if (activeStack)
	{
		std::ifstream file(fileName);

		if (file.is_open())
		{
			Book book;
			while (file >> book)
			{
				activeStack->push(book);
			}

			file.close();
		}
		else
		{
			std::cerr << "Unable to open file: " << fileName << std::endl;
		}
	}
	else
	{
		std::cerr << "No active stack. Please select or create a stack before loading books." <<
		          std::endl;
	}
}

// Implement the getter for activeStack
Stack* IntendToRead::getActiveStack() const
{
	return activeStack;
}

// Implement the getter for stacks
const List& IntendToRead::getStacks() const
{
	return stacks;
}



// Add a book to the active stack
void IntendToRead::addBookToStack(const Book& book)
{
	activeStack->push(book);
}

void IntendToRead::printStackTitles() const
{
	Stack* activeStack = getActiveStack();
	if (activeStack)
	{
		// Print titles of all books in the active stack
		while (!activeStack->isEmpty())
		{
			cout << activeStack->topBook().getTitle() << endl;
			activeStack->pop();
		}
	}
	else
	{
		cout << "No active stack. Please select or create a stack before printing titles." << endl;
	}
}

// Print details of the top book in the active stack
void IntendToRead::printStackTop() const
{
	std::cout << activeStack->topBook() << std::endl;
}

// Remove the top book from the active stack
void IntendToRead::removeBook()
{
	activeStack->pop();
}
