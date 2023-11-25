
#ifndef PROVAINTERMEDIA_BOOK_H
#define PROVAINTERMEDIA_BOOK_H

#include <string>
#include "Date.h"
#include "Exceptions.h"

class Book{
public:
    // Costruttori, Distruttori, e Funzioni Membro
    Book();
    Book(std::string aN, std::string aS, std::string t, std::string i);             //costruttore senza data di copyright -> viene inizializzata ad una data di default modificabile
    Book(std::string aN, std::string aS, std::string t, std::string i, Date d);     //costruttore con data copyright specificata

    //Getters
    std::string getIsbn() const;
    std::string getTitle() const;
    std::string getAuthorName() const;
    std::string getAuthorSurname() const;
    Date getDate() const;
    bool isOnLoan() const;
    void setLending();
    void setReturned();

    //Date setter
    void setDate(Date d); //public cosi' se un libro viene inizializzato senza data di copyright si può modificare più tardi

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

    //Setters
    bool setIsbn(std::string i);
    bool setTitle(std::string t);
    bool setAuthorName(std::string n);
    bool setAuthorSurname(std::string s);
    void setOnLoan();
};

std::ostream& operator<<(std::ostream& output, const Book& book);

#endif //PROVAINTERMEDIA_BOOK_H
