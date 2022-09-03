/*Q10. Write a menu driven program to test the following cases.
1)   ODD / EVEN
2)  Prime / Not prime
3)  Palindrome / Not Palindrome
4)  Armstrong / Not Armstrong number
5) Quit.*/


#include<stdio.h>
int nod(int);
int power(int,int);
void iseo(int);
void isprime(int);
void ispal(int);
void isarmstrong(int);
int main()
{
	int num,c;
	printf("enter a number\n");
	scanf("%d",&num);		
    printf("ENTER THE CHOICE IN\nMENU TO SEE IF THE NUMBER %d IS :\n 1-ODD OR EVEN\n 2-PRIME OR NOT PRIME\n 3-PALINDROME OR NOT PALINDROME\n 4-ARMSTRONG OR NOT ARMSTRONG\n 5-to quit\n",num);
    scanf("%d",&c);
	while (c!=5)
	{
		switch(c){
        case 1: iseo(num);
        break;
        case 2: isprime(num);
        break;
        case 3: ispal(num);
        break;
        case 4: isarmstrong(num);
        break;
        default: printf("WRONG INPUT\n");
		}
		printf("ENTER THE NEXT CHOICE IN\nMENU TO SEE IF THE NUMBERS %d IS :\n 1-ODD OR EVEN\n 2-PRIME OR NOT PRIME\n 3-PALINDROME OR NOT PALINDROME\n 4-ARMSTRONG OR NOT ARMSTRONG\n 5-to quit\n",num);
        scanf("%d",&c);
        if(c==5){
			printf("quitting...\n");
		}
    }
	return 0;
}

int nod(int a){
    int c=0;
    while(a){
        a/=10;
        c++;
    }
    return c;
} 

int power(int a,int b){
    int p=1;
    for(int i=0;i<b;i++){
        p*=a;
    }
    return p;
}

void iseo(int a){
	if(a%2==0){
		printf("%d is an even no.\n",a);
	}
	else
		printf("%d is odd no.\n",a);
}

void isprime(int a){
	int f=0;
	if(a==2)
		printf("%d is prime\n",a);
	else if(a<2||a%2==0){
		printf("%d is not prime\n",a);
	}
	else
	{
		for(int i=3;i*i<=a;i+=2)
		{
			if(a%i==0)
			{
				printf("%d is not prime\n",a);
				f=1;
			}
		}
		if(f!=1)
			printf("%d is prime\n",a);
	}
}

void ispal(int a){
    int sum=0,b=a,nn=0,f=0;
    int n=nod(a);
    while (a)
    {
        nn+=(a%10)*(power(10,n-1));
        a/=10;n--;
    }
    if(nn==b){
        printf("%d is palindrome\n",b);f=1;
    }
	if(f!=1)
    printf("%d is not a palindrome\n",b);
}

void isarmstrong(int a){
    int sum=0,b=a,f=0;
    int n=nod(a);
    while (a)
    {
        sum+=power(a%10,n);
        a/=10;
    }
    if(sum==b){
        printf("%d is armstrong\n",b);
		f=1;
    }
	if(f!=1)
    	printf("%d is not armstrong\n",b);
}