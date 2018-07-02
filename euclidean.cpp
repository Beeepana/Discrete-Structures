#include<iostream>
using namespace std;
int main()
{
	int a,b,x,y,remainder=0,temp;
	cout<<"enter two number for GCD:";
	cin>>a>>b;
	x=a;
	y=b;

    if (a<b)
    {
    	temp=a;
    	a=b;
    	b=temp;
	}
	
    // for Euclidean algorithm
    while (b!=0)
    {
    	remainder=a%b;
    	a=b;
    	b=remainder;
    
	}
	cout<<"gcd("<<x<<","<<y<<")="<<a;
	
	
	
	
	
	
}
