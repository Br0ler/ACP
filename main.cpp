// by broler

#include "Book.hpp"
#include "BookSeller.hpp"
#include <iostream>
using namespace std;

int main(){
    BookSeller David("The Chronicals", 250.41);
    David.getCashBalance();

    return 0;
}

/**
int main() {
    BookSeller shop("Books ’r’ Us", 100.0);
    cout <‌< "Starting balance: $" <‌< shop.getCashBalance() <‌< endl;

    Book *hp1 = new Book("Harry Potter Philosopher Stone", "J. K. Rowling", 10.50, 29.95, 1997); // 0 
    Book *hp2a = new Book("Harry Potter Chamber Secrets", "J. K. Rowling", 11.50, 31.95, 1998); // 1
    Book *hp2b = new Book("Harry Potter Chamber Secrets", "J. K. Rowling", 9.50, 31.95, 1998);
    Book *phil = new Book("Philosophy 101", "Paul Kleinman", 8.75, 15.99, 2013);

    shop.purchaseStock(hp2b);

    cout <‌< "Balance after purchase: $" <‌< shop.getCashBalance() <‌< endl;
    cout <‌< "Total books: " <‌< shop.totalNumberOfBooks() <‌< endl; 

    Book *result = shop.retrieveBookFromID(2);
    if (result != 0)
    cout <‌< “ID search found: ” <‌< result->getTitle() <‌< endl; 
    bool success = shop.scanAndSellBook(2);
    result = shop.searchKeyword("Secrets");
    
    if (result != 0) {
    cout <‌< “Keyword search found: ” <‌< result->getTitle() <‌< endl; 
        int num = shop.sellAllCopiesOfBook(result);
        cout <‌< "Sold " <‌< num <‌< " copies" <‌< endl;
    }


    return 0;
}



Questions:
1. can I use |using namespace BookSeller;| or something similar to avoid scoping in .hpp every time I add a new function in .cpp
2. In ACP WebIDE, what does |#ifndef BOOK_H_| and |#define BOOK_H_| do?
 * */


