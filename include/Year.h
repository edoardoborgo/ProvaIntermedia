
#ifndef PROVAINTERMEDIA_YEAR_H
#define PROVAINTERMEDIA_YEAR_H

#include "Exceptions.h"

class Year{
    static constexpr int min = 1800;
    static constexpr int max = 2200;

public:
    Year() : year{min}{};       //costruttore anno di default:      year=1800
    Year(int y) : year{y}{      //costruttore con anno specificato: year=y
        if(y<=min || y>=max)
            throw InvalidYear("");
    };
    int getYear(){ return year; };

private:
    int year;
};

#endif //PROVAINTERMEDIA_YEAR_H