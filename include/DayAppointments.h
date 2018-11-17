#ifndef DAYAPPOINTMENTS_H
#define DAYAPPOINTMENTS_H
#include <Appointement.h>

class DayAppointments
{
    public:
        DayAppointments();
        void add_appointment(Appointement a);
        void del();
        DayAppointments& operator=(DayAppointments d2);
        int sz;
        int cap;
        void resize_list();
        Appointement getApp(int i);
        bool operator==(DayAppointments d);
        bool operator!=(DayAppointments d);
        virtual ~DayAppointments();
    protected:

    private:
        Appointement* app_list;

};

#endif // DAYAPPOINTMENTS_H
