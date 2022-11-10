/*Q.2	Write a program to implement the exception handling with re throwing in 	exception.
*/
#include <iostream>
using namespace std;
void fun(int i){
    try{
        if(i==0)
            throw 1;
        if(i==1)
            throw 'a';
        if(i==2)
            throw 1.2;
    }
    catch(int i){
        cout<<"caught an integer\n";
        cout<<i<<endl; 
    }
    catch(double i){
        cout<<"caught a double\n"; 
        throw 'b';
    }
    catch(char i){
        cout<<"caught a character\n"; 
        cout<<i<<endl;
    }//string type use template

}
int main(){
    int i;
    cout<<"enter a number : ";
    cin>>i;
    try{
        fun(i);
    }
    catch(char i){
        cout<<"caught a character\n"; 
        cout<<i<<endl;
    }
     cout<<"enter a number : ";
     cin>>i;
    fun(i);
     cout<<"enter a number : ";
     cin>>i;
    fun(i);

    return 0;
}