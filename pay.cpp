#include <iostream>
#include <string>
#include "person.cpp"
#include <fstream>
#include <cstring>
using namespace std;

int readData(Person per[20]);
void writeData(Person per[20], int size);
int main()
{
    int size;
    Person per[20];
    size = readData(per);
    writeData(per, size);

    cout << "done";


}
int readData(Person per[20])
{
    int num;
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
        if(!inData.eof())
        {
            num++;
        }
        

        
    }
    //num = num - 1;
    return num;
}
void writeData(Person p[20], int size)
{
    float totPay;
    string full;
    ofstream outData;
    outData.open("output.txt");
    for(int i = 0; i < size; i++)
    {

        full = p[i].fullName();
        outData << full;
        outData << " ";
        totPay = p[i].totalPay();
        outData << totPay;
        outData << endl; 


    }
}
