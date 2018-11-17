#include "DayAppointments.h"

DayAppointments::DayAppointments(){
    cap=2;
    app_list=new Appointement[cap];
    sz=0;
}
void DayAppointments::add_appointment(Appointement a){
    for(int i=0 ; i<sz ; i++){
        if(app_list[sz].overlap(a)){
            return;//not allowing two overlapping appointments
        }
    }
    app_list[sz]=a;
    sz++;
    if(sz==cap){
        cap*=2;
        Appointement* app_list2=new Appointement[cap];
        for(int i=0 ; i<sz ; i++){
            app_list2[i]=app_list[i];
        }
        app_list=app_list2;
    }
}
void DayAppointments::resize_list(){
    cap=2;
    app_list=new Appointement[cap];
    sz=0;
}
Appointement DayAppointments::getApp(int ind){
    return app_list[ind];
}
DayAppointments& DayAppointments::operator=(DayAppointments d){
        resize_list();
        for(int i=0 ; i<d.sz  ; i++){
            add_appointment(d.getApp(i));
        }
        return *this;
}

bool DayAppointments::operator==(DayAppointments d){
    if(this->sz != d.sz){
        return false;
    }
    for(int i=0 ; i<this->sz ; i++){
        if(app_list[i] != d.getApp(i)){
            return false;
        }
    }
    return true;
}
bool DayAppointments::operator!=(DayAppointments d){
    if(this->sz != d.sz){
        return true;
    }
    for(int i=0 ; i<this->sz ; i++){
        if(app_list[i] != d.getApp(i)){
            return true;
        }
    }
    return false;
}
void DayAppointments::del(){
    delete app_list;
}
DayAppointments::~DayAppointments(){
    delete app_list;
}
