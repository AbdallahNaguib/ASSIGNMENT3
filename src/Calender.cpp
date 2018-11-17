#include "Calender.h"
using namespace std;
#include <iostream>
Calender::Calender(){
    days=new DayAppointments[7];
}

Calender::~Calender()
{
    delete days;
}

void Calender::add_day(DayAppointments d,int day){
    days[day]=d;
}
DayAppointments Calender::get_day(int ind){
    DayAppointments app=days[ind];
    return app;
}
void Calender::del(int day){
    days[day].del();
}
void Calender::make_equal(int day1,int day2){
    cout<<"hi"<<endl;
    days[day2]=days[day1];
}
