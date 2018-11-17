#include <iostream>
#include <Calender.h>
using namespace std;
istream& operator>> (istream& in, Time& t){
    string time_string,m;
    cin>>time_string;
    cin>>m;
    time_string+=" "+m;
    t.setTime(time_string);
    return in;
}
ostream& operator<< (ostream& out, Time& t){
    out<<t.getTime()<<" ";
    if(t.AM){
        out<<"am";
    }else{
        out<<"pm";
    }
    return out;
}
istream& operator>>(istream& in,Appointement& a){
    st:
    Time start,End;
    cout<<"Enter start time : ";

    in>>start;
    cout<<"Enter end time : ";
    in>>End;
    if(End<=start){
        cout<<"start time should be smaller than end time"<<endl;
        goto st;
    }
    a.setEnd(End);
    a.setStart(start);
    return in;
}
ostream& operator<<(ostream& out,Appointement& a){
    Time st=a.getStart();
    Time en=a.getEnd();
    out<<"start time is "<<st;
    out<<" and end time is "<<en;
    return out;
}
istream& operator>> (istream& in, DayAppointments& d){
    cout<<"Enter the number of Appointments : ";
    int x;
    in>>x;
    for(int i=0 ; i<x ; i++){
        Appointement a;
        in>>a;
        d.add_appointment(a);
    }
    return in;
}
ostream& operator<< (ostream& out, DayAppointments& d){
    for(int i= 0 ;i<d.sz ; i++){
        Appointement a=d.getApp(i);
        out<<a<<endl;
    }
    return out;
}
int main(){
    Calender cal;
    cout<<"you should enter the time in HH:MM am/pm format"<<endl;
    while(true){
        cout<<"what do you want to do?"<<endl;
        cout<<"1-insert day_appointment"<<endl;
        cout<<"2-display day_appointments"<<endl;
        cout<<"3-delete day_appointment"<<endl;
        cout<<"4-make the appointments of a day equal to another day"<<endl;
        int choice;
        cin>>choice;
        if(choice == 1){
            cout<<"what day do you want to insert in ? "<<endl;
            int day;
            cin>>day;
            DayAppointments d;
            cin>>d;
            cal.add_day(d,day);
        }else if(choice == 2){
            cout<<"what day do you want to display ? "<<endl;
           int day;
            cin>>day;
            DayAppointments d=cal.get_day(day);
            cout<<d<<endl;
        }else if(choice == 3){
            int day;
            cout<<"what day do you want to delete ? "<<endl;
            cin>>day;
            cal.del(day);
        }else if(choice == 4){
            int day1,day2;
            cout<<"Enter the two days"<<endl;
            cin>>day1>>day2;
            cal.make_equal(day1,day2);
        }
    }
    return 0;
}
