#include "Time.h"
#include <iostream>
using namespace std;
Time::Time(){
}
Time::Time(string t){
    this->time=t.substr(0,5);
    if(t[6] == 'a'){
        AM=true;
    }
}
void Time::setTime(string t){
    this->time=t.substr(0,5);
    if(t[6] == 'a'){
        AM=true;
    }
}
string Time::getTime(){
    return time;
}
bool Time::operator<(Time t2){
    if(this->AM == true && t2.AM == false){
        return true;
    }else if(this->AM==false && t2.AM == true){
        return false;
    }
    for(int i=0 ; i<time.size() ; i++){
        if(time[i]<t2.time[i]){
            return true;
        }else if(time[i]>t2.time[i]){
            return false;
        }
    }
    return false;//cause they are equal
}
bool Time::operator<=(Time t2){
    if(this->AM == true && t2.AM == false){
        return true;
    }else if(this->AM==false && t2.AM == true){
        return false;
    }
    for(int i=0 ; i<time.size() ; i++){
        if(time[i]<t2.time[i]){
            return true;
        }else if(time[i]>t2.time[i]){
            return false;
        }
    }
    return true;//cause they are equal
}

bool Time::operator>(Time t2){
    if(this->AM == true && t2.AM == false){
        return false;
    }else if(this->AM==false && t2.AM == true){
        return true;
    }
    for(int i=0 ; i<time.size() ; i++){
        if(time[i]<t2.time[i]){
            return false;
        }else if(time[i]>t2.time[i]){
            return true;
        }
    }
    return false;//cause they are equal
}
bool Time::operator>=(Time t2){
    if(this->AM == true && t2.AM == false){
        return false;
    }else if(this->AM==false && t2.AM == true){
        return true;
    }
    for(int i=0 ; i<time.size() ; i++){
        if(time[i]<t2.time[i]){
            return false;
        }else if(time[i]>t2.time[i]){
            return true;
        }
    }
    return true;//cause they are equal
}
bool Time::operator==(Time t2){
    if(this->AM != t2.AM){
        return false;
    }
    for(int i=0 ; i<time.size() ; i++){
        if(time[i] != t2.time[i]){
            return false;
        }
    }
    return true;//cause they are equal
}
bool Time::operator!=(Time t2){
    if(this->AM != t2.AM){
        return true;
    }
    for(int i=0 ; i<time.size() ; i++){
        if(time[i] != t2.time[i]){
            return true;
        }
    }
    return false;//cause they are equal
}
