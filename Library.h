#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"
#include "Member.h"
#include "Loan.h"
#include "CD.h"
#include <vector>

using namespace std;

class Library {
private:
    vector<Book> books;
    vector<Member> members;
    vector<Loan> loans;
    vector<CD> cds;  

    Book* findBook(const string& isbn);
    Member* findMember(const string& memberId);
    int countActiveLoansForMember(const string& memberId) const;
    bool isBookAvailable(const string& isbn) const;
    Loan* findActiveLoan(const string& memberId, const string& isbn);

public:
    void addBook(const Book& book);
    void addMember(const Member& member);
    void listBooks() const;
    void listMembers() const;
    void listLoans(bool onlyActive = false) const;
    void addCD(const CD& cd);  
    void showAllCDs() const;
    bool borrowBook(const string& memberId, const string& isbn, const string& borrowDate);
    bool returnBook(const string& memberId, const string& isbn, const string& returnDate);
    bool removeBookWISBN(const string& isbn);
    bool removeMemberWID(const string& memberId);
    Book* findBookByIsbn(const string& isbn);
    Book* findBookByTitle(const string& title);

};

#endif // LIBRARY_H

