/*Q3.	Write a program to implement the exception handling with the functionality 	of testing the throw restrictions.
*/
#include<iostream>
using namespace std;
void fun(int i) throw(int,char) {
    if(i==0)
        throw 1;
    if(i==1)
        throw 'a';
    if(i==2)
        throw 1.2;   
}
int main(){

    int i;
    cout<<"enter a number : ";
    cin>>i;
    try{
        fun(i);
    }
    catch(int i){
        cout<<"caught an integer\n";
        cout<<i<<endl; 
    }
    catch(double i){
        cout<<"caught a double\n"; 
        cout<<i<<endl;
    }
    catch(char i){
        cout<<"caught a character\n"; 
        cout<<i<<endl;
    }
    return 0;
}