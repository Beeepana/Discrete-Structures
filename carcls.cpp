#include<iostream>
using namespace std;

int main()
{
	int a[10],b[10],c[10],i,j,k=0,n,m;
	cout<<"Enter the size of array A-";
	cin>>n;
	cout<<"Enter elements of array A:";
	for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    
    cout<<"Enter the size of array B-";
    cin>>m;
    cout<<"Enter the elements of array B:";
    for(j=0;j<m;j++)
     {
       cin>>b[j];
     }
     
	cout<<"{ ";
    for(i=0;i<n;i++)
     {
     	for(j=0;j<m;j++)
     	{
     		cout<<"("<<a[i]<<","<<b[j]<<")";
		 }
	 }
	cout<<"}";
}
