WAP to find floor and ceiling of a number using function.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n;
	cout<<"enter a number:";
	cin>>n;
	cout<<"ceiling is :"<<ceil(n)<<endl;
	cout<<"floor is:"<<floor(n)<<endl;
	
}

WAP to find floor and ceiling of a number without using function.

#include<iostream>
using namespace std;
int main()
{
	int n;
	float b;
	cout<<"enter a number:";
	cin>>n;
	b=n;
	if (n>0)
	{
		cout<<"floor is:"<<b;
		cout<<endl<<"ceiling is:"<<b+1;
        }
        else if (n<0)
        {
    	cout<<"floor is:"<<b-1;
    	cout<<endl<<"ceiling is:"<<b;
	}
};


WAP to find floor and ceiling of a number by macrosubstitution.
	
	
	#define CEILING(x) ((x>0)?(x+1):x);
#define FLOOR(x) ((x>0)?x:(x-1));
#include<iostream>
using namespace std;

int main()
{
        float n;
	cout<<"enter a number:";
	cin>>n;
	int x=n;
	cout<<"floor is:"<<FLOOR(x);
	cout<<endl<<"ceiling is:"<<CEILING(x);
}
