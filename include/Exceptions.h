
#ifndef PROVAINTERMEDIA_EXCEPTIONS_H
#define PROVAINTERMEDIA_EXCEPTIONS_H

#include <exception>
#include <string>

class IsbnLength : public std::exception{
public:
    IsbnLength(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

class BlankTitle : public std::exception{
public:
    BlankTitle(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

class BlankAuthorName : public std::exception{
public:
    BlankAuthorName(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

class BlankAuthorSurname : public std::exception{
public:
    BlankAuthorSurname(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

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

class BookshelfDimension : public std::exception{
public:
    BookshelfDimension(const std::string& message) : errorMessage(message){};
private:
    std::string errorMessage;
};

//Date viene già gestita nella classe date//

#endif //PROVAINTERMEDIA_EXCEPTIONS_H
