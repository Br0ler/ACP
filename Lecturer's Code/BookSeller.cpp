
#include "BookSeller.h"
using namespace std;

BookSeller::BookSeller(const std::string &shopName, double initialBalance) {
	this->shopName = shopName;
	cashBalance = initialBalance;
}

std::string BookSeller::getShopName() const {
	return shopName;
}

double BookSeller::getBalance() const {
	return cashBalance;
}

void BookSeller::purchaseStock(Book *book) {
	cashBalance -= book->getCostPrice();
	collection.push_back(book);
}

int BookSeller::totalNumberOfBooksInBusiness() const {
	return collection.size();
}

Book* BookSeller::retrieveBookFromID(int id) const {

	for (unsigned int index = 0; index < collection.size(); index++ ) {
		Book *book = collection[index];
		int bookID = book->getID();

		if (bookID == id) {
			return book;
		}
	}

	return NULL;  // return 0;
}

bool BookSeller::scanAndSellBook(int id) {

	Book* result = retrieveBookFromID(id);

	if (result == NULL) {
		return false;
	}

	if (result->isSold()) {
		return false;
	}

	result->setSold();
	cashBalance += result->getSalePrice();

	return true;
}

int BookSeller::totalNumberOfUnsoldBooks() const {
	// before: make assumption
	int countOfUnsoldBooks = 0;

	// update assumption if necessary
	for (unsigned int index = 0; index < collection.size(); index++ ) {
		Book *book = collection[index];

		if (!book->isSold()) {
			countOfUnsoldBooks++;
		}
	}

	// after: return value of assumption
	return countOfUnsoldBooks;
}

Book* BookSeller::searchKeyword(const std::string &keyword) const {

	for (unsigned int index = 0; index < collection.size(); index++ ) {
		Book *book = collection[index];
		string bookTitle = book->getTitle();

		if (bookTitle.find(keyword) != string::npos) {
			return book;
		}
	}

	return NULL;
}

int BookSeller::sellAllCopiesOfBook(Book *bookTryingToSellCopiesOf) {
	int copies = 0;

	for (unsigned int index = 0; index < collection.size(); index++ ) {
		Book *book = collection[index];

		if (*book == *bookTryingToSellCopiesOf) {
			bool successfullySold = scanAndSellBook(book->getID());

			if (successfullySold) {
				copies++;
			}
		}
	}

	return copies;
}

BookSeller::~BookSeller() {
	for (unsigned int index = 0; index < collection.size(); index++ ) {
		Book *book = collection[index];
		delete book;
	}
}


