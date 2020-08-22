
#ifndef BOOKSELLER_H_
#define BOOKSELLER_H_

#include <string>
#include <vector>
#include "Book.h"

class BookSeller {
private:
	std::string shopName;
	double cashBalance;
	std::vector<Book*> collection;
public:
	BookSeller(const std::string &shopName, double initialBalance);
	std::string getShopName() const;
	double getBalance() const;
	void purchaseStock(Book *book);
	int totalNumberOfBooksInBusiness() const;
	Book* retrieveBookFromID(int id) const;
	bool scanAndSellBook(int id);
	int totalNumberOfUnsoldBooks() const;
	Book* searchKeyword(const std::string &keyword) const;
	int sellAllCopiesOfBook(Book *book);
	virtual ~BookSeller();
};

#endif /* BOOKSELLER_H_ */
