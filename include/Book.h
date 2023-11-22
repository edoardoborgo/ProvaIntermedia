
#ifndef PROVAINTERMEDIA_BOOK_H
#define PROVAINTERMEDIA_BOOK_H

#include <string>
#include "Date.h"
#include "Exceptions.h"

class Book{
public:
    // Costruttori, Distruttori, e Funzioni Membro
    Book();
    Book(std::string aN, std::string aS, std::string t, std::string i);
    Book(std::string aN, std::string aS, std::string t, std::string i, Date d);

    //Getters
    std::string getIsbn() const;
    std::string getTitle() const;
    std::string getAuthorName() const;
    std::string getAuthorSurname() const;
    Date getDate() const;
    bool isOnLoan() const;
    void setLending();
    void setReturned();

    //Setters
    bool setIsbn(std::string i);
    bool setTitle(std::string t);
    bool setAuthorName(std::string n);
    bool setAuthorSurname(std::string s);
    void setDate(Date d);

    //Function Members
    bool operator==(const Book& otherBook) const;
    bool operator!=(const Book& otherBook) const;

private:
    // Variabili Membro
    std::string isbn;
    std::string title;
    std::string authorName;
    std::string authorSurname;
    Date copyrightDate;
    bool onLoan;

    //Setter
    void setOnLoan();
};

std::ostream& operator<<(std::ostream& output, const Book& book);

#endif //PROVAINTERMEDIA_BOOK_H
