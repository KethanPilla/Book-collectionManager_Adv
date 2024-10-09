# Book Collection Manager

## Overview
The Book Collection Manager is a C++ application designed to manage book collections across different genres, track the books that users intend to read, and provide organized structures for accessing book details efficiently. The project employs multiple data structures like stacks and lists to handle book-related operations such as storing, categorizing, and managing the user's reading list.

## Purpose
The purpose of this project is to:
- Efficiently manage books by genre and user preferences.
- Maintain a list of books that the user intends to read.
- Organize book data and allow the user to retrieve book information by genre or ISBN.
- Provide a structured way of tracking books read and books to read using data structures like stacks and linked lists.
  
## Underlying Data Structures & Principles
- **Stack**:
  - A stack is used to store the books in the "intended to read" list. It follows the Last In First Out (LIFO) principle, allowing the user to add books to the reading stack and remove them as they finish reading.
    
- **Linked List**:
  - Linked lists are used to store book details by genre. Each genre has its own linked list, which can be traversed to view all the books in that genre. Linked lists allow for efficient insertion and deletion of book entries.
    
- **Object-Oriented Programming (OOP)**:
  - The project is designed around OOP principles. Each book is represented as an object with attributes like title, author, ISBN, and genre. Books are stored in genre-based lists, making it easy to organize and query book data.
    
## Implementation
- **Book Class (`Book.cpp`, `Book.h`)**: This class defines the properties of a book such as title, author, ISBN, and genre. It provides methods to get and set book details.

- **IntendToRead Class (`IntendToRead.cpp`, `IntendToRead.h`)**: This class manages the stack of books that the user intends to read. Users can add books to the stack or remove the last book they read.

- **List Class (`List.cpp`, `List.h`)**: This class implements a linked list for storing books by genre. Each genre has a separate list, and the list can be traversed to retrieve or modify book data.

- **Stack Class (`Stack.cpp`, `Stack.h`)**: A custom stack implementation used in the IntendToRead class. It provides stack operations like `push` and `pop` to manage the list of books that the user wants to read.

- **Main Program (`main.cpp`)**: The entry point of the application, where users can interact with the system to add books, view books by genre, manage their reading stack, and get book recommendations.

## Files
- `Book.cpp` and `Book.h`: Defines the Book class and its attributes (title, author, ISBN, and genre).
- `IntendToRead.cpp` and `IntendToRead.h`: Manages the stack of books that the user intends to read.
- `List.cpp` and `List.h`: Implements the linked list that stores books by genre.
- `Stack.cpp` and `Stack.h`: Custom stack implementation used by the `IntendToRead` class.
- `main.cpp`: The main entry point that integrates all functionalities and provides user interaction.
  
## Test Cases
### Test Case 1: Adding a Book to the Collection

**Operation**:
- Add a book with the title "Sunburst and Luminary", author "Don Eyles", ISBN "9780986385933", and genre "computers".
  
**Expected Outcome**:
```
The book is successfully added to the linked list under the "computers" genre.
```
### Test Case 2: Adding a Book to the Intend to Read Stack

**Operation**:
- Add the book "Recursion" by "Blake Crouch" to the intend to read stack.

**Expected Outcome**:
```
The book "Recursion" is added to the stack, making it the last book to be read.
```
### Test Case 3: Removing a Book from the Intend to Read Stack

**Operation**:
- Remove the top book from the "Intend to Read" stack.
  
**Expected Outcome**:
```
The book "Recursion" is removed, and the next book in the stack is now on top.
```
### Test Case 4: Displaying All Books in a Genre

**Operation**:
- Display all books in the "history" genre.
  
**Expected Outcome**:
```
The program lists all the books in the history genre, including "Operation Paperclip" and "Double Cross: The True Story of the D-Day Spies."
```
### Test Case 5: Searching for a Book by ISBN

**Operation**:
- Search for a book with the ISBN "9780307389374".
- 
**Expected Outcome**:
```
The program finds and displays details for "Von Braun: Dreamer of Space, Engineer of War".
```
## Use Case
### Use Case: Personal Book Collection Management
Imagine a user who has a vast collection of books and wants to organize them by genre, manage their reading list, and search for specific books by ISBN. The _Book Collection Manager_ allows the user to:
- Categorize books into genres like computers, history, science fiction, and more.
- Track which books they intend to read using a stack structure.
- Search for specific books by ISBN to quickly retrieve book information.
This tool can also be extended to build a more complex library system or personal book recommendation engine based on user reading patterns.
