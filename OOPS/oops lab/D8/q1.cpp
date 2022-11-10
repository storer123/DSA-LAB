/*Q.1	Write a program to implement the exception handling with multiple catch statements.
*/
#include<iostream>
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
        cout<<i<<endl;
    }
    catch(char i){
        cout<<"caught a character\n"; 
        cout<<i<<endl;
    }//string type use template

}
int main(){
    int i;
    cin>>i;
    fun(i);
     cin>>i;
    fun(i);
     cin>>i;
    fun(i);
    
    return 0;
}