//
// Created by Rucci, Nicholas on 9/21/20.
//

#include <string>
#include <iostream>
#include "book.h"

Book::Book(std::string isbn, std::string title) {
    this->isbn = isbn;
    this->title = title;
}

void Book::printDetails() {
    std::cout << this->getISBN() << ": " << this->getTitle() << std::endl;
}

std::string Book::getISBN() {
    return this->isbn;
}

std::string Book::getTitle() {
    return this->title;
}
