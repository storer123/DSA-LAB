/*Q.4Create a class with one integer data member. Include the member functions to input the value and to display the value of data member. 
WAP to count the number of times the input() function is called and display it.*/
#include<iostream>
using namespace std;
class abc{
    int a;
    static int b;
    public:
    static void numboinp();
    void input(){
        b++;
        cout<<"\nenter data : ";
        cin>>a;
    } 
    void display(){
        cout<<"\ndata is : "<<a;
    }
};
int abc :: b;
void abc:: numboinp(){
    cout<<"\nno. of times input is called is "<<b;
}
int main(){
    abc x,y;
    x.input();
    x.input();
    y.input();
    x.display();
    y.display();
    abc ::numboinp();
    return 0;
}