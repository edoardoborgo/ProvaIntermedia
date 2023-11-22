#include "../include/Date.h"

Date::Date(Year y_, Date::Month m_, int d_) : y(y_),m(m_),d{d_} {
    if(!chekDayBound(d))
        throw InvalidDay("");
}

Date::Date(const Date &d_) {
    y=d_.getYear();
    m=d_.getMonth();
    d=d_.getDay();
}

bool Date::checkDayBound(int day) {
    calculateFebruaryBound();
    int numMonth = static_cast<int>(m);
    if(!(d>=1 && d<=dayBounds[numMonth-1]))
        return false;
    else
        return true;
}

void Date::calculateFebruaryBound() {
    int numFebruary = static_cast<int>(Month::February);
    if((y.getYear()%4==0 && y.getYear()%100!=0) || y.getYear()%400==0){
        //LeapYear, Feb = 29
        dayBounds[numFebruary-1] = 29;
    }
}

void Date::setYear(Year y_){
    y = y_;
}
void Date::setMonth(Date::Month m_){
    m = m_;
}
void Date::setDay(int d_){
    d = d_;
}