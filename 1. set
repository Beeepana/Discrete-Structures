#include<iostream>
using namespace std;

int main()
{
	int setA[10],setB[10],m,n,i,j,k=0,l=0,flag=0,Aonly[10],Bonly[10],uni[10],count=0,temp=0;
	
	cout<<"enter number of elements of set A:";
	cin>>n;
	cout<<"enter the elements of set A one by one in ascending order:";
	for (i=0;i<n;i++)
	{
		cin>>setA[i];
	}
	
	
	cout<<endl<<"enter number of elements of set B:";
	cin>>m;
	cout<<"enter the elements of set B one by one in ascending order:";
	for (i=0;i<m;i++)
	{
		cin>>setB[i];
	}
	
	//for union
	cout<<endl<<"Union is:"<<endl;
	for(i=0;i<n;i++)
    {
     uni[i]=setA[i];
     cout<<uni[i]<<" ";
    }
    
   for(i=0;i<m;i++)
    {
     flag=0;
     for(j=0;j<n;j++)
       {
              if(setB[i]==setA[j])
               {
                flag=1;
               }
       }
      if(flag==0)
       {
               cout<<setB[i]<<" ";
       }
    }
    
    
    
    
    //for interssection
    cout<<endl<<"Intersection is:"<<endl;
    for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
       {
              if(setB[i]==setA[j])
               {
               cout<<setB[i]<<" ";
               }
       }
 
    }
    
    //for difference
    cout<<endl<<"difference of set A is:"<<endl;
  
	
    for(i=0;i<n;i++)
    {
    	flag=0;
    	for(j=0;j<m;j++)
    	{
    		if (setA[i]!=setB[j])
    		{
    	    flag++;
    		}
    	}
    	
		if (flag==m)
		{
		  Aonly[k]=setA[i];
		  cout<<Aonly[k]<<" ";
		  count++;
		  k++;
		}	
	}
	
    cout<<endl<<"difference of set B is:"<<endl;
    for(i=0;i<m;i++)
    {
    	flag=0;
    	for(j=0;j<n;j++)
    	{
    		if (setB[i]!=setA[j])
    		{
    	    flag++;
    		}
    	}
		if (flag==n)
		{
		  Bonly[l]=setB[i];
		  cout<<Bonly[l]<<" ";
		  temp++;
		  l++;
		}	
	}
	
	
	// for symmetric difference
    cout<<endl<<"the symmetric difference is:"<<endl;
    for(k=0;k<=count;k++)
    {
	cout<<Aonly[k]<<" ";
    }
	
	for(l=0;l<=temp;l++)
	{
	cout<<Bonly[l]<<" ";
    }
}


Output:
enter number of elements of set A:4
enter the elements of set A one by one in ascending order:1 2 3 5

enter number of elements of set B:5
enter the elements of set B one by one in ascending order:5 6 7 8 9

Union is:
1 2 3 5 6 7 8 9
Intersection is:
5
difference of set A is:
1 2 3
difference of set B is:
6 7 8 9
the symmetric difference is:1 2 3 6 7 8 9
