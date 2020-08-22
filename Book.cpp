// by broler

#include "Book.hpp"

Book::Book(const string &name, const string &author, double cost, double price, int year):title(name), author(author),cost(cost),price(price),year(year),sold(false){

}
/**
Book::get(string &name) const{
    if (item.compare("title")){
        Book::title();
    } else if(item.compare("author")){
        return author;
    } else if (item.compare("cost")){
        return cost;
    } else if(item.compare("price")){
        return price;
    } else if (item.compare("year")){
        cout << "Please use getPublicationYear()." << endl;
    } else {
        cout << "Information you are after does not exist in our system." << endl;
    };
}**/

Book::

Book::~Book(){}