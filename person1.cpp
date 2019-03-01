#include <string>
#include <iostream>
#include "person.h"
using namespace std; 

Person::Person()
{
    firstName = " ";
    lastName = " ";
    payRate = 0.0;
    hoursWorked = 0.0;
}
void Person::setLastName(string lName)
{
    lastName = lName;
}
string Person::getLastName()
{
    return lastName;
}
void Person::setFirstName(string fName)
{
    firstName = fName;
}
string Person::getFirstName()
{
    return firstName;
}
void Person::setPayRate(float rate)
{
    payRate = rate;
}
float Person::getPayRate()
{
    return payRate;
}
void Person::setHoursWorked(float hwork)
{
    hoursWorked = hwork;
}
float Person::getHoursWorked()
{
    return hoursWorked;
}
float Person::totalPay()
{
    float tPay;
    float pay;
    float hours;
    pay = getPayRate();
    hours = getHoursWorked();
    tPay = pay*hours;
    return tPay;
}
string Person::fullName()
{
    string fname = getFirstName();
    string lName = getLastName();
    string fullname = fname + " " + lName;
    return fullname;
}