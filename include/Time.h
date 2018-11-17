#ifndef TIME_H
#define TIME_H
#include <string>
using namespace std;
class Time
{
    public:
        Time();
        Time(string time);
        void setTime(string t);
        string getTime();
        bool operator<(Time t2);
        bool operator<=(Time t2);
        bool operator>(Time t2);
        bool operator>=(Time t2);
        bool operator==(Time t2);
        bool operator!=(Time t2);
         bool AM=false;
    private:
        string time;
};

#endif // TIME_H
