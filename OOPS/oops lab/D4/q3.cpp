/*Q3.Define a class student with following details;

private members: regdno, name, marks and avg mark of class. public members:

input () to accept all the values

display () to display all data members on screen findavg () to find avg marks of the entire class showavg () static funtion to display the avg. marks.

Input details for 10 students, find their average marks and display it.*/
#include<iostream>
using namespace std;

class student{
    int regdno;
    string name;
    int marks;
    static float avgmarks;
    public:
    void input();
    void display();
    void findavg();
    static void showavg();
        
};
float student :: avgmarks;
void student ::showavg(){
    cout<<"average marks is "<<avgmarks;
}
void student ::input(){
    cout<<"enter regdno : ";
    cin>>regdno;
    cout<<"enter name : ";
    cin>>name;
    cout<<"enter marks : ";
    cin>>marks;
    findavg();
}
void student ::findavg(){
    avgmarks+=marks/10.0;
}
void student ::display(){
    cout<<"regdno = ";
    cout<<regdno;
    cout<<"\tname = ";
    cout<<name;
    cout<<"\tmarks = ";
    cout<<marks<<endl;
}

int main(){
    student s[10];
    for(int i=0;i<10;i++){
        s[i].input();
    }
    for(int i=0;i<10;i++){
        s[i].display();
    }
    student :: showavg();
    return 0;
}