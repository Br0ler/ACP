
#ifndef BOOK_H_
#define BOOK_H_

#include<string>

class Book {
private:
	 std::string title;
	 std::string author;
	 double costPrice;
	 double salePrice;
	 int year;
	 bool sold;
	 int id;
	 static int nextAvailableID;
public:
	Book(const std::string &title, const std::string &author, double costPrice, double salePrice, int year);
	std::string getTitle() const;
	std::string getAuthor() const;
	double getCostPrice() const;
	double getSalePrice() const;
	int getPublicationYear() const;
	bool isSold() const;
	int getID() const;
	void setSold();
	bool operator==(const Book &other) const;

	static int numberBooksEverMade();
	virtual ~Book();
};

#endif /* BOOK_H_ */
