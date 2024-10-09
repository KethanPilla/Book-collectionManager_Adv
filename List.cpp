#include "List.h"
#include <iostream>

using namespace std;

// Constructor
List::List() : head(nullptr) {}

// Destructor
List::~List()
{
	Node* current = head;
	while (current)
	{
		Node* next = current->next;
		delete current->stack; // Delete the stack in the node
		delete current; // Delete the node
		current = next;
	}
}

// Add a new stack to the list
void List::addStack(const std::string& stackName)
{
	Stack* newStack = new Stack();
	newStack->push(Book()); // Push a default-constructed book to initialize the stack
	Node* newNode = new Node{ newStack, head };
	head = newNode;
}

// Remove a stack from the list
void List::removeStack(int stackNumber)
{
	if (stackNumber <= 0 || !head)
	{
		std::cerr << "Invalid stack number or empty list." << std::endl;
		return;
	}

	if (stackNumber == 1)
	{
		Node* temp = head;
		head = head->next;
		delete temp->stack; // Delete the stack in the node
		delete temp; // Delete the node
	}
	else
	{
		Node* current = head;
		for (int i = 1; i < stackNumber - 1 && current->next; i++)
		{
			current = current->next;
		}

		if (current->next)
		{
			Node* temp = current->next;
			current->next = temp->next;
			delete temp->stack; // Delete the stack in the node
			delete temp; // Delete the node
		}
		else
		{
			std::cerr << "Invalid stack number." << std::endl;
		}
	}
}

// Get the active stack
Stack* List::getActiveStack() const
{
	return (head) ? head->stack : nullptr;
}

void List::updateActiveStack(int stackNumber) const
{
	if (stackNumber > 0 && head)
	{
		Node* current = head;
		for (int i = 1; i < stackNumber && current->next; i++)
		{
			current = current->next;
		}

		if (current->next)
		{
			Node* temp = current->next;
		}
		else
		{
			std::cerr << "Invalid stack number." << std::endl;
		}
	}
}



// Print the names of all stacks in the list
void List::printListNames() const
{
	Node* current = head;
	int i = 1;
	while (current)
	{
		std::cout << i << ". " << current->stack->getStackName() << std::endl;
		current = current->next;
		i++;
	}
}
