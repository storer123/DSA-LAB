//2..Create a class to store an integer array.
// Overload insertion(>>) and extraction operator(<<) to input and display the array elements.
#include<iostream>
using namespace std;
class arra{
    public:
    int *a;
    int size;
    
    arra(int j){
        a=new int[j];
        size=j;
    }
    friend void operator>>(istream& input,arra &);/* or for returning , friend istream& operator>>(istream& input,arra &a);
                                                             friend ostream& operator<<(ostream& output,arra &a);*/
    friend void operator<<(ostream& output,arra &);
   
};
void operator>>(istream &input,arra &a1){
    for(int i=0;i<a1.size;i++){
        input>>a1.a[i];
    }
}
void operator<<(ostream &output,arra &a1){
    for(int i=0;i<a1.size;i++){
        output<<a1.a[i];
    }
}
int main(){
    arra ar1(5);
    printf("enter %d elements\n",ar1.size);
    /*for(int i=0;i<ar1.size;i++){
        cin>>ar1.a[i];
    }
    for(int i=0;i<ar1.size;i++){
        cout<<ar1.a[i];
    }*/
    cin>>ar1;
    cout<<ar1;
    return 0;
}
/* friend void operator>>(istream& input,arra &a);/* or for returning , friend istream& operator>>(istream& input,arra &a);
                                                             friend ostream& operator<<(ostream& output,arra &a);
    friend void operator<<(ostream& output,arra &a);
   
};
void operator>>(istream &input,arra &a1){
        input>>a1.a>>a1.b;
}
void operator<<(ostream &output,arra &a1){
        output<<a1.a<<" + i"<<a1.b;
        //return output;
}*/