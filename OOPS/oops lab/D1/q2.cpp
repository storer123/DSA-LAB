#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter an alphabet\n";
    cin>>n;
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
        cout<<"IT IS A VOWEL";
    }
    else if((n>='a'&&n<='z')||(n>='A'&&n<='Z')) 
        cout<<"IT IS A CONSONANT";
    else 
        cout<<"IT IS NOT AN ALPHABET";
    return 0;
}