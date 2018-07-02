 /*Write a program to implement binary 
 integer addition, multiplication, and division */
 
 
 #include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int q,a[10],div,sub,mul,sum,num1,num2,temp,k,i,b,choice;
	cout<<"enter 1st number:";
	cin>>num1;
	cout<<"enter 2st number:";
	cin>>num2;
	cout<<endl<<"Enter the base to be operated:";
	cin>>b;
	
	if (num1<num2)
		{
			temp=num1;
			num1=num2;
			num2=temp;
		}
		
	cout<<endl<<"which operation do you want?"<<endl;
	cout<<"Enter 1 for addition"<<endl;
	cout<<"Enter 2 for subtraction"<<endl;
	cout<<"Enter 3 for multiplication"<<endl;
	cout<<"Enter 4 for division"<<endl;
	
	cin>>choice;
	switch(choice)
	{
	case 1:
	{
	    sum=num1+num2;
        q=sum;
        break;
	}
	case 2:
	{
    	sub=num1-num2;
	    q=sub;
	    break;
	}
	case 3:
	{
		mul=num1*num2;
		q=mul;
		break;
	}
	case 4:
	{
		div=num1/num2;
		q=div;
		break;
	}
	default:
		cout<<endl<<"wrong input";
		
	}
	
	cout<<endl<<"Answer is:";
	k=0;
    while(q!=0)
	{
		a[k]=q%b;
		q=floor(q/b);
		k++;
	}
	
	for(i=k-1;i>=0;i--)
	{
		cout<<a[i];
	}
}
