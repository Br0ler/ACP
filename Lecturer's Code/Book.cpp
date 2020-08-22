
#include "Book.h"
#include <iostream>
using namespace std;

int Book::nextAvailableID = 0;

Book::Book(const std::string &title, const std::string &author, double costPrice, double salePrice, int year) :
				title(title), author(author), costPrice(costPrice), salePrice(salePrice), year(year), sold(false) {
	this->id = nextAvailableID;
	nextAvailableID++;
}

std::string Book::getTitle() const {
	return title;
}

std::string Book::getAuthor() const {
	return author;
}

double Book::getCostPrice() const {
	return costPrice;
}

double Book::getSalePrice() const {
	return salePrice;
}

int Book::getPublicationYear() const {
	return year;
}

bool Book::isSold() const {
	return sold;
}

int Book::getID() const {
	return id;
}

void Book::setSold() {
	sold = true;
}

bool Book::operator==(const Book &other) const {
	bool sameTitle = this->title == other.title;
	bool sameAuthor = this->author == other.author;
	bool sameYear = this->year == other.year;

	return sameTitle && sameAuthor && sameYear;
}

int Book::numberBooksEverMade() {
	return nextAvailableID;
}

Book::~Book() {
	cout << "Deleting book: " << title << endl;
}

