#ifndef CALENDER_H
#define CALENDER_H
#include <DayAppointments.h>

class Calender
{
    public:
        Calender();
        virtual ~Calender();
        void add_day(DayAppointments d , int day);
        DayAppointments get_day(int ind);
        void make_equal(int,int);
        void del(int day);
    protected:

    private:
        DayAppointments* days;
};

#endif // CALENDER_H
