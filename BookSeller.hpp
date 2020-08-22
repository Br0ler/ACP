// by broler

#include <string>
#include <vector>
using namespace std;

class BookSeller{
    double balance;
    vector<Book*> bookShelf;
    string name;

    public:
    BookSeller();
    BookSeller(string shopName, double cashBalance);
    double getCashBalance() const;
    int totalNumberOfBooks() const;
    //void purchaseStock(Book *name);
    string getShopName() const;

    virtual ~BookSeller();
};