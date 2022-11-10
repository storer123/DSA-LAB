/*Q5WAP to swap the values in the private data members of two classes.*/
#include<iostream>
using namespace std;
class xyz;
class abc{
    int a;
    public:
    void getdata(){
        a=25;
    }
    void putdata(){
        cout<<a<<endl;
    }
    friend void swap(xyz & ,abc &);
};
class xyz{
    int x;
    public:
    void getdata(){
        x=52;
    }
    void putdata(){
        cout<<x<<endl;
    }
    friend void swap(xyz &,abc &);
};
void swap(xyz &z,abc &c){
    int t=z.x;
        z.x=c.a;
        c.a=t;
}
int main(){
    cout<<"befor swap :\n";
    xyz q;
    q.getdata();
    q.putdata();
    abc w;
    w.getdata();
    w.putdata();
    swap(q,w);
    cout<<"after swap :\n";
    q.putdata();
    w.putdata();

    return 0;
}