#ifndef LIST_H
#define LIST_H

#include "Stack.h" // Include the Stack class
#include<iostream>

using namespace std;

class List
{
	private:
		struct Node
		{
			Stack* stack;
			Node* next;
		};

		Node* head; // Head of the list

	public:
		// Constructor and destructor
		List();
		~List();

		// List operations
		void addStack(const std::string& stackName);
		void removeStack(int stackNumber);
		Stack* getActiveStack() const;
		void updateActiveStack(int stackNumber) const;
		void printListNames() const;

};

#endif // LIST_H
