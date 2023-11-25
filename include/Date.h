
#ifndef PROVAINTERMEDIA_DATE_H
#define PROVAINTERMEDIA_DATE_H

#include "Year.h"
#include "Exceptions.h"

class Date{
public:
    enum class Month{
        January = 1, February, March, April, May, June, July, August, September, October, November, December
    };
    Date() : y(),m(Month::January),d{1} {};
    Date(Year y_, Month m_, int d_);
    Date(const Date& d_);

    //Getters
    Year getYear() const { return y; };
    Month getMonth() const { return m; };
    int getDay() const { return d; };

    //Setters
    void setYear(Year y_);
    void setMonth(Month m_);
    void setDay(int d_);
private:
    int dayBounds[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool checkDayBound(int day);
    void calculateFebruaryBound();
    int d;
    Month m;
    Year y;
};

#endif //PROVAINTERMEDIA_DATE_H