#include <iostream>
#include "Book.h"

using namespace std;

// Default constructor
Book::Book() : title(""), author(""), isbn("") {}

// Parameterized constructor
Book::Book(const string& title, const string& author, const string& isbn)
	: title(title), author(author), isbn(isbn) {}

// implementation for the operator>>
istream& operator>>(istream& input, Book& book)
{
	// Read book details from input (assuming space-separated values)
	input >> book.title >> book.author >> book.isbn;
	return input;
}

ostream& operator<<(ostream& os, const Book& book)
{
	os << "Book Title: " << book.getTitle() << ", Author: " << book.getAuthor();
	return os;
}
// Getter methods
string Book::getTitle() const
{
	return title;
}

string Book::getAuthor() const
{
	return author;
}

string Book::getISBN() const
{
	return isbn;
}
