#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include <string>

using namespace std;

class Book
{
	private:
		string title;
		string author;
		string isbn;

		friend istream& operator>>(istream& input, Book& book);
		friend ostream& operator<<(ostream& os, const Book& book);

	public:
		// Constructors
		Book();
		Book(const string& title, const string& author, const string& isbn);

		// Getter methods
		string getTitle() const;
		string getAuthor() const;
		string getISBN() const;

};

ostream& operator<<(ostream& os, const Book& book);

#endif // BOOK_H
