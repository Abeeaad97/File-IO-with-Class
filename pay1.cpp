#include <iostream>
#include <string>
#include "person1.cpp"
#include <fstream>
#include <cstring>
using namespace std;

void readData(Person per[20]);
void writeData(Person per[20]);
int main()
{
    Person per[20];
    readData(per);
    writeData(per);

    cout << "done";


}
void readData(Person per[20])
{
    string fname;
    string lname;
    float pay;
    float hours;
    ifstream inData;
    inData.open("input.txt");

    for(int i = 0; i < 20; i++)
    {

        inData >> fname;
        inData >> lname;
        inData >> pay;
        inData >> hours;
        per[i].setFirstName(fname);
        per[i].setLastName(lname);
        per[i].setPayRate(pay);
        per[i].setHoursWorked(hours);
    }
}
void writeData(Person p[20])
{
    float totPay;
    string full;
    ofstream outData;
    outData.open("output.txt");
    for(int i = 0; i < 6; i++)
    {

        full = p[i].fullName();
        outData << full;
        outData << " ";
        totPay = p[i].totalPay();
        outData << totPay;
        outData << endl; 


    }
}
