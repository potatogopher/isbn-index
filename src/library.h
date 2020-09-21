//
// Created by Rucci, Nicholas on 9/21/20.
//

#ifndef ISBN_INDEX_LIBRARY_H
#define ISBN_INDEX_LIBRARY_H

#include <string>
#include <vector>
#include "book.h"

class Library {
    std::vector<Book> collection;

public:
    void listBooks();
    bool addBook(Book book);
    Book findBook(std::string isbn);
    bool deleteBook(std::string isbn);
};

#endif //ISBN_INDEX_LIBRARY_H
