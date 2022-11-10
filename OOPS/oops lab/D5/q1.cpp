/*1.Multiple inheritance :
	Student->Marks->results
Define the classes according to the hierarchy in the figure.
Class student stores the name and roll no. of a student.
 Class marks stores the marks of a student in three subjects. 
 Class result stores the total marks and percentage of a student. 
 Take the input for 10 students. Find the percentage & display. 
 Include all the constructors.*/

#include<iostream>
using namespace std;

class student
{
    string name;
    int roll;
    int age;

    public:
    student(){
        name="john";
        roll=0;
        age=1;
    }
    student(string s,int r,int a){
        name=s;
        roll=r;
        age=a;

    }
    student(student &s){
        name=s.name;
        roll=s.roll;
        age=s.age;
    }
    
   /* void getdata()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the roll no :";
        cin>>roll;
        cout<<"Enter the age  : ";
        cin>>age;
    }*/
     void display()
     {
        cout<<"hi!!!! ";
        cout<<"Name is: "<<name<<endl;
        cout<<"Roll is: "<<roll<<endl;
        cout<<"Age is: "<<age<<endl;
     }
};

class Test:public virtual student
{
   protected:
    int marks[3];
   
   public:

   /*void getdata()
   {
    cout<<"Enter the marks for 3 subjects: "<<endl;
    for(int i=0;i<3;i++)
    {
       cin>>marks[i];
    }
   }*/
   Test(){
        marks[0]=5;
        marks[1]=5;
        marks[2]=5;
    }
    Test(int s,int r,int a){
        marks[0]=s;marks[1]=r;marks[2]=a;

    }
    Test(Test &s){
        marks[0]=s.marks[0];
        marks[1]=s.marks[1];
        marks[2]=s.marks[2];
    }
     
   void display()
   {
    for(int i=0;i<3;i++)
    {
       cout<<marks[i]<<endl;
    }
   }
};

class result:public  Test
{
   
    float perc,total;
    int i; 
    public:
    result(int a,int b,int c,string s,int k,int l):Test(a,b,c),student(s,k,l){
        
    }
    result(){
        perc=0;
        total=0;
    }
    void getdata()
    {total=0;
      for(int i=0;i<3;i++){
        total+=marks[i];}
      perc=(total/(3.0)*10);
    }
    void display()
    { 
      student::display();
      Test::display();
      cout<<"Total marks is: "<<total;
      cout<<"\nPercentage is: "<<perc;
    }
};

int main()
{
    result r;
    r.student::display();
    r.Test::display();
    r.getdata();
    r.display();
    cout<<"\n";
    result p(r);
    p.student::display();
    p.Test::display();
    p.display();
    cout<<"\n\n";
    int n;
    int a,b,c,d,e;
    string s;
    printf("enter number of students");
    cin>>n;
    for(int i=0;i<n;i++){
        printf("enter roll no.  and marks in 3 subjects and of sports and name ");
        cin>>a>>b>>c>>d>>e;
        cin>>s;
        result j(e,c,d,s,a,b);
        j.student::display();
        j.Test::display();
        j.getdata();
        j.display();
        cout<<"\n";
    }
    /*r[i].student::getdata();
    r[i].Test::getdata();
    r[i].getdata();*/
}