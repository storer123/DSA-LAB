/*1.(a)Create a class to store the following information about an employee: Name, Emp. Id, Salary.

Store the information of 10 employees. Calculate gross salary. Display allthe information of all the employees in tabular form. Display the size of the class.

(b)Modify the above program to call the function to calculate the gross salary from another member function.*/
#include<iostream>
using namespace std;
class employee{

    public:
    int id;
    string name; 
    float bs;
    float da;
    float hra;
    float gs;
    void calc();
    void getdata();
    void another();
    void display();
           
};
void employee::another(){
    calc();
}
void employee::calc(){
    da=bs*15/100.0;
        hra=bs*75/100.0;
        gs=bs+hra+da;
}
void employee::getdata(){
    cout<<"employee "<<":-\n";
        cout<<"name : ";
        cin>>name;
        cout<<"\nId : ";
        cin>>id;
        cout<<"\nbasic salary : ";
        cin>>bs;
        cout<<"\nNOTE - da(=15 percent of base salary), hra(=75 percent of base salary) \n";
        /*da=bs*15/100.0;
        hra=bs*75/100.0;
        gs=bs+hra+da;*/
}
void employee::display(){
    another();
    cout<<"ID : "<<id<<"  Name : "<<name<<"  Base salary : "<<bs<<"  DA : "<<da<<"  HRA : "<<hra<<"  Gross salary : "<<gs<<endl;
	
}
int main(){
    employee e[10];
    for(int i=0;i<10;i++){
        e[i].getdata();
    }
    for(int i=0;i<10;i++){
        e[i].display();
    }
    cout<<sizeof(employee);

    return 0;
} 
/*#include<iostream>
using namespace std;
class employee{

    public:
    int id;
    string name; 
    float bs;
    float da;
    float hra;
    float gs;
    void getdata();
    void display();
           
};
void employee::getdata(){
    cout<<"employee "<<":-\n";
        cout<<"name : ";
        cin>>name;
        cout<<"\nId : ";
        cin>>id;
        cout<<"\nbasic salary : ";
        cin>>bs;
        cout<<"\nNOTE - da(=15 percent of base salary), hra(=75 percent of base salary) \n";
        da=bs*15/100.0;
        hra=bs*75/100.0;
        gs=bs+hra+da;
}
void employee::display(){
    cout<<"ID : "<<id<<"  Name : "<<name<<"  Base salary : "<<bs<<"  DA : "<<"  HRA : "<<hra<<"  Gross salary : "<<gs<<endl;
	
}
int main(){
    employee e[10];
    for(int i=0;i<10;i++){
        e[i].getdata();
    }
    for(int i=0;i<10;i++){
        e[i].display();
    }
    cout<<sizeof(employee);
    return 0;
} 

*/







































































































































