#include <iostream>
#include "../include/Book.h"
#include "../include/Bookshelf.h"
#include <exception>

int main() {
    // La classe Book deve permettere di eseguire la seguente operazione:
    Book mybook1;
    try{
        mybook1 = Book("David","Foster Wallace","Una cosa divertente che non faro' mai piu'","887-521-837-4");
    }catch(IsbnLength e){
        std::cout<<"Campo \"Isbn\", errore lunghezza.";
    }
    catch(BlankTitle e){
        std::cout<<"Campo \"Titolo\" vuoto."<<std::endl;
    }catch(BlankAuthorName e){
        std::cout<<"Campo \"Nome autore\" vuoto"<<std::endl;
    }catch(BlankAuthorSurname e){
        std::cout<<"Campo \"Cognome autore\" vuoto.";
    }

    Book mybook2;
    try{
        mybook2 = Book("David","Foster Wallace","Una cosa divertente che non faro' mai piu'","887-521-837-4", Date(Year(2002), Date::Month::July, 12));
    }catch(IsbnLength e){
        std::cout<<"Campo \"Isbn\", errore lunghezza.";
    }
    catch(BlankTitle e){
        std::cout<<"Campo \"Titolo\" vuoto."<<std::endl;
    }catch(BlankAuthorName e){
        std::cout<<"Campo \"Nome autore\" vuoto"<<std::endl;
    }catch(BlankAuthorSurname e){
        std::cout<<"Campo \"Cognome autore\" vuoto.";
    }



    // Tramite la classe Bookshelf deve permettere di eseguire le seguenti operazioni:
    Bookshelf shelf1(10);
    shelf1.push_back(mybook1);
    shelf1.push_back(mybook2);
    std::cout<<"Shelf1: "<<std::endl;
    for(int i=0; i<shelf1.get_size(); i++)
        std::cout<<shelf1[i]<<std::endl;
    std::cout<<"Dimensione Shelf1: " << shelf1.get_size() << std::endl<<std::endl;
    //------------------------------------//
    std::cout<<"Shelf1, libro 1 == libro 2: "<< ((shelf1[0]==shelf1[1]) ? "vero":"falso") << std::endl;
    //------------------------------------//
    std::cout<<"Shelf1, libro 1 in prestito: ";
    try{
        shelf1[0].setLending();
        std::cout<<"Libro disponibile per il prestito."<<std::endl;
    }catch(std::exception e){
        std::cout<<"Libro non disponibile per il prestito."<<std::endl;
    }
    std::cout<<std::endl;
    for(int i=0; i<shelf1.get_size(); i++)
        std::cout<<shelf1[i]<<std::endl;
    //------------------------------------//
    Bookshelf shelf2(shelf1);
    shelf2.pop_back();
    std::cout<<"Shelf2: "<<std::endl;
    for(int i=0; i<shelf2.get_size(); i++)
        std::cout<<shelf2.at(i)<<std::endl;
    //------------------------------------//

    return 0;
}
