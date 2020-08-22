
#include "BookSeller.h"
#include "Book.h"

#include <iostream>
using namespace std;

int main() {

	BookSeller shop("Books r Us", 100);

	cout << "The initial balance of " << shop.getShopName() << " is $" << shop.getBalance() << endl;

	Book *hp1 = new Book("Harry Potter Philosopher Stone", "J. K. Rowling", 10.50, 29.95, 1997);	// 0
	Book *hp2a = new Book("Harry Potter Chamber Secrets", "J. K. Rowling", 11.50, 31.95, 1998);		// 1
	Book *hp2b = new Book("Harry Potter Chamber Secrets", "J. K. Rowling", 9.50, 31.95, 1998);		// 2
	Book *phil = new Book("Philosophy 101", "Paul Kleinman", 8.75, 15.99, 2013);					// 3


	shop.purchaseStock(hp2a);
	shop.purchaseStock(hp2b);
	shop.purchaseStock(phil);
	shop.purchaseStock(hp1);

	cout << "The balance of " << shop.getShopName() << " is $" << shop.getBalance() << " before the sale attempt" << endl;

	int numberOfCopiesSold = shop.sellAllCopiesOfBook(phil);

	cout << "Sold " << numberOfCopiesSold << " books" << endl;


//	bool soldSuccessfully = shop.scanAndSellBook(1);
//	if (soldSuccessfully) {
//		cout << "(1) SOLD!" << endl;
//	}
//
//	soldSuccessfully = shop.scanAndSellBook(8);
//	if (soldSuccessfully) {
//		cout << "(2) SOLD!" << endl;
//	}
//
//	soldSuccessfully = shop.scanAndSellBook(3);
//	if (soldSuccessfully) {
//		cout << "(3) SOLD!" << endl;
//	}
//
	cout << "The balance of " << shop.getShopName() << " is $" << shop.getBalance() << " after the sale attempt" << endl;
//
//	cout << "The total number of unsold books: " << shop.totalNumberOfUnsoldBooks() << endl;


	return 0;
}
