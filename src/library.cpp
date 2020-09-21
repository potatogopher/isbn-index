//
// Created by Rucci, Nicholas on 9/21/20.
//

#include "library.h"
#include <iostream>

void Library::listBooks() {
    for (int i = 0; i < this->collection.size(); i++) {
        std::cout << i+1 << ") " << this->collection[i].getISBN() << ": " << this->collection[i].getTitle() << std::endl;
    }
}

bool Library::addBook(Book book) {
    this->collection.push_back(book);
    return true;
}

Book Library::findBook(std::string isbn) {
    for (Book b : this->collection) {
        if (b.getISBN() == isbn) {
            return b;
        }
    }
    throw std::exception();
}

bool Library::deleteBook(std::string isbn) {
    for (int i = 0; i < this->collection.size(); i++) {
        if (this->collection[i].getISBN() == isbn) {
            this->collection.erase(this->collection.begin()+i);
            return true;
        }
    }
    return false;
}
