// by broler

#include <iostream>
#include <string>
using namespace std;

class Book{
    string title, author;
    double cost, price;
    int year;
    bool sold;

    public:
    Book();
    Book(const string &name, const string &author, double cost, double price, int year);
    //void get(string &item) const;
};
