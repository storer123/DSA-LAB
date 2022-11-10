//i.Create a class which stores name, author and price of a book. Store information for n number of books .Display information of all the books in a given price range using friend function.
#include<iostream>
using namespace std;
class book{
    string name;
    string auth;
    int price;
    public:
    void getdata(){
        cin>>name;
        cin>>auth;
        cin>>price;
    }
    friend void display(book *b,int n);
};
void display(book *b,int n){
    for (int i=0;i<n;i++){
        cout<<b[i].name<<endl<<b[i].auth<<endl<<b[i].price<<endl;
    }
}
int main(){
    book b[10];
    for(int i=0;i<2;i++){
        b[i].getdata();
    }
    display(b,2);
    return 0;
}