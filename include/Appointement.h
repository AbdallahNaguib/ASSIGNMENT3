#ifndef APPOINTEMENT_H
#define APPOINTEMENT_H
#include <Time.h>

class Appointement
{
    public:
        Appointement();
        Appointement(Time Start,Time End);
        Time getStart();
        void setStart(Time t);
        Time getEnd();
        void setEnd(Time t);
        bool operator>=(Appointement a2);
        bool operator<=(Appointement a2);
        bool operator<(Appointement a2);
        bool operator>(Appointement a2);
        bool operator==(Appointement a2);
        bool operator!=(Appointement a2);
        bool overlap(Appointement a2);

    protected:

    private:
        Time start_time;
        Time end_time;
};

#endif // APPOINTEMENT_H
