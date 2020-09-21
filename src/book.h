//
// Created by Rucci, Nicholas on 9/21/20.
//

#ifndef ISBN_INDEX_BOOK_H
#define ISBN_INDEX_BOOK_H

class Book {
    std::string isbn;
    std::string title;

public:
    Book(std::string isbn, std::string title);
    void printDetails();
    std::string getISBN();
    std::string getTitle();
};

#endif //ISBN_INDEX_LIBRARY_H
