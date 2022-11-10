/*Q5.	WAP to demonstrate multiple catch and catch all.
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
    catch(...){
        cout<<"caught an exception\n";
    }

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