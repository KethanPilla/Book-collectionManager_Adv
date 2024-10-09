#include "IntendToRead.h"
#include <iostream>

using namespace std;

int main()
{
	IntendToRead intendToRead;

	while (true)
	{
		cout << "Active Stack: " << ((intendToRead.getActiveStack()) ?
		                             intendToRead.getActiveStack()->getStackName() : "None Selected") << endl;
		cout << "Make a Selection:" << endl;
		cout << "1. Create a Stack" << endl;
		cout << "2. Delete a Stack" << endl;
		cout << "3. Print Stack Names" << endl;
		cout << "4. Update Active Stack" << endl;
		cout << "*** Select for Active Stack: " << ((intendToRead.getActiveStack()) ?
		        intendToRead.getActiveStack()->getStackName() : "None Selected") << " ***" << endl;
		cout << "5. Load Books From File" << endl;
		cout << "6. Add Book to Stack" << endl;
		cout << "7. Print Stack Titles" << endl;
		cout << "8. Print Stack Top" << endl;
		cout << "9. Remove Book" << endl;
		cout << "-1. To Quit" << endl;

		int choice;
		cin >> choice;

		switch (choice)
		{
			case 1:
			{
				string stackName;
				cout << "Enter a name for your stack: ";
				cin >> stackName;
				intendToRead.createStack(stackName);
				break;
			}
			case 2:
			{
				cout << "*** Select a Stack by Number: ***" << endl;
				intendToRead.printStackNames();
				int stackNumber;
				cin >> stackNumber;
				intendToRead.deleteStack(stackNumber);
				break;
			}
			case 3:
				intendToRead.printStackNames();
				break;
			case 4:
			{
				cout << "*** Select a Stack by Number: ***" << endl;
				intendToRead.printStackNames();
				int stackNumber;
				cin >> stackNumber;
				intendToRead.updateActiveStack(stackNumber);
				break;
			}
			case 5:
			{
				string fileName;
				cout << "Enter the file name: ";
				cin >> fileName;
				intendToRead.loadBooksFromFile(fileName);
				break;
			}
			case 6:
			{
				// Assuming you enter book details interactively
				string title, author, isbn;
				cout << "Enter Book Title: ";
				cin >> title;
				cout << "Enter Book Author: ";
				cin >> author;
				cout << "Enter Book ISBN: ";
				cin >> isbn;

				Book newBook(title, author, isbn);
				intendToRead.addBookToStack(newBook);
				break;
			}
			case 7:
				intendToRead.printStackTitles();
				break;
			case 8:
				intendToRead.printStackTop();
				break;
			case 9:
				intendToRead.removeBook();
				break;
			case -1:
				return 0; // Exit the program
			default:
				cout << "Invalid choice. Please try again." << endl;
		}
	}

	return 0;
}
