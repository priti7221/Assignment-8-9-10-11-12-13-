#include <iostream>
#include <string>

using namespace std;


struct Book {
    string isbn;
    string title;
    string author;
    string publisher;
    int year;
};


Book* findBookByISBN(Book library[], int size, string isbn) {
    for (int i = 0; i < size; ++i) {
        if (library[i].isbn == isbn) {
            return &library[i];
        }
    }
    return nullptr;
}

int main() {
    
    const int librarySize = 5;
    Book library[librarySize] = {
        {"884", "Clean Code", "Robert C. Martin", "Prentice Hall", 2008},
        {"627", "The Pragmatic Programmer", "Andrew Hunt, David Thomas", "Addison-Wesley", 1999},
        {"610", "Design Patterns", "Erich Gamma, Richard Helm, Ralph Johnson, John Vlissides", "Addison-Wesley", 1994},
        {"953", "Refactoring", "Martin Fowler", "Addison-Wesley", 1999},
        {"126", "Head First Design Patterns", "Eric Freeman, Elisabeth Robson, Bert Bates, Kathy Sierra", "O'Reilly Media", 2004}
    };

    
    cout << "Enter ISBN: ";
    string isbn;
    cin >> isbn;

   
    Book* foundBook = findBookByISBN(library, librarySize, isbn);
    if (foundBook != nullptr) {
        
        cout << "Title: " << foundBook->title << endl;
        cout << "Author: " << foundBook->author << endl;
        cout << "Publisher: " << foundBook->publisher << endl;
        cout << "Year: " << foundBook->year << endl;
    } else {
       
        cout << "The book is not available in the library." << endl;
    }

    return 0;
} 
