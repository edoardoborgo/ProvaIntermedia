
#ifndef PROVAINTERMEDIA_EXCEPTIONS_H
#define PROVAINTERMEDIA_EXCEPTIONS_H

#include <exception>
#include <string>

//ISBN non e' di 13 caratteri
class IsbnLength : public std::exception{
public:
    IsbnLength(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

//titolo vuoto
class BlankTitle : public std::exception{
public:
    BlankTitle(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

//campo nome autore vuoto
class BlankAuthorName : public std::exception{
public:
    BlankAuthorName(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

//campo cognome autore vuoto
class BlankAuthorSurname : public std::exception{
public:
    BlankAuthorSurname(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

//se un libro non e' in prestito (e' disponibile) non puo' essere resituito
class BookNotLending : public std::exception{
public:
    BookNotLending(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

//se un libro non e' disponibile (e' gia' in prestito) non puo' essere prestato
class BookNotReturned : public std::exception{
public:
    BookNotReturned(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

//se year non e' compreso tra 1800 e 2200
class InvalidYear : public std::exception{
public:
    InvalidYear(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

class InvalidDay : public std::exception{
public:
    InvalidDay(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

//dimensione deve essere maggiore di 0
class BookshelfDimension : public std::exception{
public:
    BookshelfDimension(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

//Date viene già gestita nella classe date//

#endif //PROVAINTERMEDIA_EXCEPTIONS_H
