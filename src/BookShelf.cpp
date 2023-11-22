#include "../include/BookShelf.h"

Bookshelf::Bookshelf() : sz{0}, capacity{0}, books{nullptr}{}

Bookshelf::Bookshelf(int capacity_) : sz{0}, capacity{capacity_}, books{new Book[capacity_]}{
    if (capacity < 1)
        throw BookshelfDimension("");
}

Bookshelf :: Bookshelf(const Bookshelf& arg) : sz{arg.get_size()}, capacity{arg.get_capacity()}, books{new Book[arg.get_size()]}{
    std::copy(arg.books, arg.books+sz, books);
}
Book& Bookshelf::operator[](int index){
    if (index < 0 || index >= get_size())
        throw std::out_of_range("Index out of range");
    return books[index];
}

const Book& Bookshelf::operator[](int index) const{
    if (index < 0 || index >= get_size())
        throw std::out_of_range("Index out of range");
    return books[index];
}

Book& Bookshelf::at(int index){
    if(index < 0 || index >= get_size())
        throw std::out_of_range("Index out of range");
    return books[index];
}

const Book& Bookshelf::at(int index) const{
    if(index < 0 || index >= get_size())
        throw std::out_of_range("Index out of range");
    return books[index];
}

void Bookshelf::push_back(Book b){
    if(sz==capacity){
        reserve(capacity*2);
    }
    books[sz] = b;
    sz++;
}

void Bookshelf::pop_back(){
    if(sz!=0){
        sz--;
    }
}

void Bookshelf::reserve(int new_capacity){
    if(new_capacity>capacity){
        capacity = new_capacity;
        Book* newBooks = new Book[new_capacity];
        std::copy(books, books+sz-1, newBooks);
        delete[] books;
        books=newBooks;
    }
}

//Getters
int Bookshelf::get_size() const {
    return sz;
}
int Bookshelf::get_capacity() const {
    return capacity;
}
//Setters
void Bookshelf::set_size(int sz_) {
    sz = sz_;
}
void Bookshelf::set_capacity(int capacity_) {
    capacity = capacity_;
}

//Distruttore
Bookshelf::~Bookshelf(){
    delete[] books;
}