#include "course.h"

course::course(deptType dept, int courseNum, std::string sectNum, const dayType days[], int numDays, int startHour, int startMin, int endHour, int endMin, std::string building, std::string campus, int roomNum)
{
    this->dept = dept;
    this->courseNum = courseNum;
    this->sectNum=sectNum;
    for(into i=0; i<numDays;i++){
        this->days[i]=days[i]}
    this->numDays=numDays;
    this->startHour=startHour;
    this->startMin=startMin;
    this->endHour=endHour;
    this->endMin=endMin;
    this->building=building;
    this->campus=campus;
    this->roomNum=roomNum;
}
//copy constructor
course(course &myCourse){
    this->dept=myCourse.dept;
    this->courseNum=myCourse.courseNum;
    this->sectNum=myCourse.sectNum;
    for(into i=0; i<numDays;i++){
        this->days[i]=myCourse.days[i]}
    this->numDays=myCourse.numDays;
    this->startHour=myCourse.startHour;
    this->startMin=myCourse.startMin;
    this->endHour=myCourse.endHour;
    this->endMin=myCourse.endMin;
    this->building=myCourse.building;
    this->campus=myCourse.campus;
    this->roomNum=myCourse.roomNum;
}
//destructor
course::~course(){
delete[] days;
