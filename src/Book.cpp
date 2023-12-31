#include "../include/Book.h"
#include <iostream>

Book::Book() : onLoan(false){}

Book::Book(std::string aN, std::string aS, std::string t, std::string i)
        : authorName(aN), authorSurname(aS), title(t), isbn(i), copyrightDate(Date(Year(), Date::Month::January, 1)), onLoan(false) {
    //data copyright iniziallizzata ad una data di default: January 1, 1800

    if(isbn.length() != 13)
        throw IsbnLength("");
    if(title.length()==0)
        throw BlankTitle("");
    if(authorName.length()==0)
        throw BlankAuthorName("");
    if(authorSurname.length()==0)
        throw BlankAuthorSurname("");
}

Book::Book(std::string aN, std::string aS, std::string t, std::string i, Date d)
    : authorName(aN), authorSurname(aS), title(t), isbn(i), copyrightDate(d), onLoan(false) {

    if(isbn.length() != 13)
        throw IsbnLength("");
    if(title.length()==0)
        throw BlankTitle("");
    if(authorName.length()==0)
        throw BlankAuthorName("");
    if(authorSurname.length()==0)
        throw BlankAuthorSurname("");
}

//Getters
std::string Book::getIsbn() const {
    return isbn;
}
std::string Book::getTitle() const {
    return title;
}
std::string Book::getAuthorName() const {
    return authorName;
}
std::string Book::getAuthorSurname() const {
    return authorSurname;
}
Date Book::getDate() const{
    return copyrightDate;
}
bool Book::isOnLoan() const {
    return onLoan;
}
void Book::setLending(){
    if(isOnLoan())
        throw BookNotLending("");
    setOnLoan();
}
void Book::setReturned(){
    if(!isOnLoan())
        throw BookNotReturned("");
    setOnLoan();
}

//Setters
bool Book::setIsbn(std::string i){
    if(i.length()!=13){
        return false;
    }else{
        isbn=i;
        return true;
    }
}
bool Book::setTitle(std::string t) {
    if(t.length()==0){
        return false;
    }else{
        title=t;
        return true;
    }
}
bool Book::setAuthorName(std::string n) {
    if(n.length()==0){
        return false;
    }else{
        authorName=n;
        return true;
    }
}
bool Book::setAuthorSurname(std::string s) {
    if(s.length()==0){
        return false;
    }else{
        authorSurname=s;
        return true;
    }
}
void Book::setDate(Date d) {
    copyrightDate.setYear(d.getYear());
    copyrightDate.setMonth(d.getMonth());
    copyrightDate.setDay(d.getDay());
}
void Book::setOnLoan(){
    onLoan=!onLoan;
}

bool Book::operator==(const Book &otherBook) const {
    return (isbn==otherBook.isbn);
}
bool Book::operator!=(const Book &otherBook) const {
    return (isbn!=otherBook.isbn);
}

std::ostream& operator<<(std::ostream& output, const Book& book){
    output << "Isbn: \t\t" << book.getIsbn() << std::endl;
    output << "Title: \t\t" << book.getTitle() << std::endl;
    output << "Author: \t" << book.getAuthorName() << " " << book.getAuthorSurname() << std::endl;
    output << "Date CR: \t" << book.getDate().getYear().getYear() << "/" << static_cast<int>(book.getDate().getMonth()) << "/" << book.getDate().getDay() << std::endl;
    output << "OnLoan: \t" << ((book.isOnLoan()) ? "unavailable":"available") << std::endl;
    return output;
}