#include "Appointement.h"

Appointement::Appointement()
{
    //ctor
}
Appointement::Appointement(Time st,Time en){
    this->start_time=st;
    this->end_time=en;
}
Time Appointement::getEnd(){
    return this->end_time;
}
Time Appointement::getStart(){
    return this->start_time;
}
void Appointement::setStart(Time t){
    this->start_time=t;
}
void Appointement::setEnd(Time t){
    this->end_time=t;
}
bool Appointement::operator==(Appointement a2){
    if(this->getStart() == a2.getStart() && this->getEnd() == a2.getEnd()){
        return true;
    }else{
        return false;
    }
}
bool Appointement::operator!=(Appointement a2){
    if(this->getStart() != a2.getStart() || this->getEnd() != a2.getEnd()){
        return true;
    }else{
        return false;
    }
}
bool  Appointement::operator>(Appointement a2){
    if(this->getStart() > a2.getStart() || (this->getStart() == a2.getStart()
                                            && this->getEnd() > a2.getEnd())){
            return true;
    }
    return false;
}
bool  Appointement::operator<(Appointement a2){
    if(this->getStart() < a2.getStart() || (this->getStart() == a2.getStart()
                                            && this->getEnd() < a2.getEnd())){
            return true;
    }
    return false;
}
bool Appointement::operator>=(Appointement a2){
    if(this->getStart() > a2.getStart() || (this->getStart() == a2.getStart()
                                            && this->getEnd() >= a2.getEnd()) ){
        return true;
    }else{
        return false;
    }
}
bool Appointement::operator<=(Appointement a2){
    if(this->getStart()<a2.getStart() || (this->getStart() == a2.getStart()
                                            && this->getEnd() <= a2.getEnd()) ){
        return true;
    }else{
        return false;
    }
}
bool Appointement::overlap(Appointement a2){
    if(this->getStart() > a2.getStart() && this->getStart() < a2.getEnd()){
        return true;
    }
    if(this->getEnd() > a2.getStart() && this->getEnd() < a2.getEnd()){
        return true;
    }
    if(this->getStart() < a2.getStart() && this->getEnd() > a2.getEnd()){
        return true;
    }
    return false;
}
