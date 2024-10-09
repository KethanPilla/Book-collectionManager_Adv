#ifndef INTENDTOREAD_H
#define INTENDTOREAD_H

#include<iostream>
#include "List.h" // Include the List class

using namespace std;

class IntendToRead
{
	private:
		List stacks; // List to store stacks
		Stack* activeStack; // Pointer to the active stack

	public:
		// Constructor and destructor
		IntendToRead();
		~IntendToRead();
		List& getList();
		Stack* getActiveStack() const;
		const List& getStacks() const;

		// IntendToRead operations
		void createStack(const std::string& stackName);
		void deleteStack(int stackNumber);
		void printStackNames() const;
		void updateActiveStack(int stackNumber);
		void loadBooksFromFile(const std::string& fileName);
		void addBookToStack(const Book& book);
		void printStackTitles() const;
		void printStackTop() const;
		void removeBook();
};

#endif // INTENDTOREAD_H
