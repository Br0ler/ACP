// by broler

#include "BookSeller.hpp"
#include "Book.hpp"

BookSeller::~BookSeller(){}

BookSeller::BookSeller(){
    balance = 0;
    name = "Unknown";
}

BookSeller::BookSeller(string shopName, double cashBalance){
    balance = cashBalance;
    name = shopName; //This means that you can only initialise 1 book at a time
}

/**
void BookSeller::purchaseStock(Book *BookName){
    if ((balance -= *BookName.cost()) >= 0){
        bookShelf.push_back(BookName); //Book's position in bookShelf's position is its unique id
    } else {
        balance += *BookName.cost();
        cout << "Book costs too much! The bookseller can't afford it."
    };
} **/

// get...()s
string BookSeller::getShopName() const{
    return name;
    }
int BookSeller::totalNumberOfBooks() const{ 
    return bookShelf.size();
    }
double BookSeller::getCashBalance() const{ 
    cout << name << " has a balance of " << balance << "$." << endl;
    return balance;
    }
