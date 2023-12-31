#ifndef PROVAINTERMEDIA_BOOKSHELF_H
#define PROVAINTERMEDIA_BOOKSHELF_H

#include "Book.h"
#include "Exceptions.h"
#include <algorithm>
#include <stdexcept>

class Bookshelf{
public:
    //costruttori
    Bookshelf();
    Bookshelf(int capacity);
    Bookshelf(const Bookshelf&);    //costruttore di copia

    //Function Members
    Book &operator[](int index);
    const Book &operator[](int index) const;
    Book &at(int index);
    const Book &at(int index) const;
    void push_back(Book b);
    void pop_back();

    //Getters
    int get_size() const;
    int get_capacity() const;

    //Distruttore
    ~Bookshelf();

private:
    Book* books;
    int sz;                 //numero di elementi inseriti
    int capacity;           //dimensione del buffer
    void reserve(int n);    //verifica che capacity sia sufficiente per contenere un nuovo book, se non e' cosi' rialloca il vettore

    //Setters
    void set_size(int s);
    void set_capacity(int c);
};

#endif //PROVAINTERMEDIA_BOOKSHELF_H
