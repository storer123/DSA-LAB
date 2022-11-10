/*Q4 	WAP to throw and handle ‘division by zero’ exception.
*/

#include <iostream>
using namespace std;
 
int main()
{
    int a,b;
    try  {
        cout<<"enter a and b integers to divide a by b \n";
        cin>>a>>b;
        if(b==0)
            throw 1;
        cout<<a<<"/"<<b<<" is "<<(float)a/b;
    }
    catch (...)  {
        cout << "can't divide by 0\n";
    }
    return 0;
}