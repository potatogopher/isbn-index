#include <iostream>

#include "src/book.h"
#include "src/library.h"

int main() {
    Library l = Library();

    for (;;) {
        std::cout << "What would you like to do?" << std::endl;
        std::cout << "[r] Record a book" << std::endl;
        std::cout << "[f] Find a book" << std::endl;
        std::cout << "[l] List all books" << std::endl;
        std::cout << "[q] Quit" << std::endl;
        std::cout << "Enter an option: ";

        std::string option;
        std::cin >> option;

        if (option == "r") {
            std::string isbn, title;
            std::cout << "Enter an ISBN: ";
            std::cin >> isbn;

            std::cout << "Enter a Title: ";
            std::cin >> title;

            Book b = Book(isbn, title);
            l.addBook(b);
        } else if (option == "f") {
            std::string isbn;
            std::cout << "Enter an ISBN: ";
            std::cin >> isbn;

            try {
                Book book = l.findBook(isbn);
                std::cout << "Book found: "; book.printDetails();
            } catch (std::exception&) {
                std::cout << "Book not found!" << std::endl;
            }
        } else if (option == "l") {
            l.listBooks();
        } else if (option == "q") {
            break;
        }

        std::cout << std::endl;
    }
    return 0;
}
