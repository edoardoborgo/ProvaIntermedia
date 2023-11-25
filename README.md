# Prova Intermedia
#### Alberto Penzo, Edoardo Borgo, Federico Battistella.
Il progetto Prova Intermedia consiste nella progettazione e implementazione di una classe denominata "*Book*" per la rappresentazione di Libro e di una classe "*Bookshelf*" per gestire vettori di elementi *Book*.
## Classe Book
 La classe **Book** contiene:
 - Campi per salvare Isbn, Titolo, Nome autore, Cognome autore, Data di copyright, Prestito
 - Funzioni per accedere ai campi membro
 - Funzioni per registrare prestito e restituzione
 - Funzioni per confrontare oggetti Book basate sul loro Isbn
 - Funzione di output per stampare lo stato del libro.
  
Scelte progettuali: 
- Il codice ISBN è rappresentato mediante una std::string il cui unico requisito è quello di avere
lunghezza 13.
- Un libro può avere un solo autore identificato da un Nome e un Cognome.
- Data di copyright se non presente viene impostata al 01/01/1800, essendo una data di copyright improbabile questo valore viene utilizzato per identificare i libri che non sono coperti da copyright.

## Classe Bookshelf
La classe **Bookshelf** è stata implementata sulla base di MyVector, per gestire vettori di elementi Book, mettendo a disposizione funzionalità per l'aggiunta, l'accesso e la rimozione di elementi.

## Classe Date
La classe **Date** contiene:
- Campi per salvare Giorno, Mese, Anno.
- Funzioni per accedere ai campi membro
- Funzioni per modificare i campi membro

Scelte progettuali:
- Per default, se non specificato diversamente, la data viene inizializzata a 01/01/1800; questo valore viene utilizzato per identificare un libro privo di data di copyright.
- Giorno è di tipo intero, Mese è di tipo enum class Month, Year è rappresentato dalla classe Year.

## Classe Year
La classe **Year** contiene:
- Campo per salvare l'anno.

Scelte progettuali:
- Il range di anni possibili è limitato tra 1800 e 2200.
- Per default, se non specificato diversamente, l'anno viene inizializzato a 1800.

## Compilazione ed esecuzione
Compilazione (da ProvaIntermedia/):  
```g++ src/main.cpp src/Date.cpp src/Book.cpp src/Bookshelf.cpp include/Year.h include/Exceptions.h -o ProvaIntermedia ```  
Esecuzione:
```.\ProvaIntermedia.exe```