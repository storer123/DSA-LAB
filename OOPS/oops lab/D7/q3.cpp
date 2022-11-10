/*iii.Create a class which stores account number, customer name and balance. 
Derive two classes from ‘Account’ class: ‘Savings’ and ‘Current’. 
The ‘Savings’ class stores minimum balance. 
The ‘Current’ class stores the over-due amount. 
Include member functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.]
     [For current account overdue amount should be calculated.]
-display balance
Display data from each class using virtual function.
*/
#include<iostream>
using namespace std;
class account
{
    protected:
        char name[10];
        int ac_type;
        int ac_no;
    public:
        virtual void deposit()=0;
        virtual void withdrawal()=0;
        void setdata(){
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enter Account No : ";
            cin>>ac_no;
       }
       void disp(int n){
           ac_type=n;
           cout<<"\nName of Account Holder:"<<name;
           cout<<"\nAccount Number : "<<ac_no;
           if(ac_type==1)
           cout<<"\nAccount Type : CURRENT";
           else
           cout<<"\nAccount Type  :SAVING";
       }
};
class curracc:public account{
    float balance;
    public:
    curracc(){
        balance=0.00;
    }
    void deposit(){
        int no;
        cout<<"Enter the Amount:";
        cin>>no;
        balance=balance+no;
    }
    void withdrawal(){
        int no;
        cout<<"Enter the Amount:";
        cin>>no;
        if(no>balance)
            cout<<"->Your withdrawal more than Account Balance.";
        else{
            balance=balance-no;
            cout<<"->Withdrawal is Passed";
        }
    }
    void disp(){
        cout<<"\nTotal  Balance is : Rs."<<balance;
    }
};
class savingacc:public account{
    int i;
    float balance;
    public:
    savingacc(){
        balance=0.00;
        i=0;
    }
    void deposit(){
        int no;
        cout<<"Enter the Amount:";
        cin>>no;
        i=no*3/100;
        balance=balance+no+i;
        cout<<"->Amount is Added Your Balance.";
    }
    void withdrawal(){
        int no;
        cout<<"Enter the Amount:";
        cin>>no;
        if(no>balance)
        cout<<"->Your withdrawal more than Account Balance.";
        else{
        
            balance=balance-no;
            cout<<"->Withdrawal is Passed";
        }
    }
    void disp(){
        cout<<"\nInterest of Amount :"<<i<<" Rs.";
        cout<<"\nTotal  Balance :"<<balance<<" Rs.";
    }
};
int main(){
    int no;
    char ch;
    account *cu;
    curracc obj1;
    savingacc  obj2;
    cout<<"C->CURRENT ACCOUNT.\nS->SAVINGS ACCOUNT.\nEnter the Account Type:";
    cin>>ch;
    do{
        cout<<"\n1.DEPOSIT.\n2.WITHDRAWAL.\n3.MY ACCOUNT DETAILS.\n4.EXIT.\nEnter the Choice:";
        cin>>no;
        if(ch=='c' || ch=='C'){
        cu=&obj1;
        cu->setdata();
            switch(no){
                case 1:
                    obj1.deposit();
                    break;
                case 2:
                    obj1.withdrawal();
                    break;
                case 3:
                    cu->disp(1);
                    obj1.disp();
                    break;
                case 4:
                    cout<<"PRESS ENTER FOR EXIT...";
                    break;
                default:
                    cout<<"Invalid enter the number,TRY AGAIN.";
                }
        }
        if(ch=='s' || ch=='S'){
            cu=&obj2;
            cu->setdata();
            switch(no){
                case 1:
                    cu->deposit();
                    break;
                case 2:
                    cu->withdrawal();
                    break;
                case 3:
                    cu->disp(0);
                    obj2.disp();
                break;
                    case 4:
                    cout<<"PREES ENTER FOR EXIT...";
                    break;
                default:
                    cout<<"Invalid enter the number,TRY AGAIN.";
            }
        }
    }while(no!=4);
    return 0;
}