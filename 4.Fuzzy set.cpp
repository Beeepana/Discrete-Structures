#include<stdio.h>
int i,age[5];
float a[5],b[5],c[5];
char name[5][15];

//for Union
void Union()
{
	for(i=0;i<5;i++)
	{
		if(a[i]>=b[i])
		c[i]=a[i];
		else 
		c[i]=b[i];
	}
	printf("\n union:\n");
	printf("{  ");
	for(i=0;i<5;i++)
	{
		printf("%.2f / %s ,",c[i],name[i]);
	}
	printf("}");
}



//for Intersection
void Intersection()
{
	for(i=0;i<5;i++)
	{
		if(a[i]<=b[i])
		c[i]=a[i];
		else
		c[i]=b[i];
	}
	printf("\n\nintersection:\n");
	
	printf("{");
	for(i=0;i<5;i++)
	{
		printf("%.2f / %s , ",c[i],name[i]);
	}
	printf("}");
}

//for complement
void Complement()
{
	printf("\ncomplement:\n");
	printf("\ncomplement of A: \n");
	printf("{");
	for(i=0;i<5;i++)
	{
	printf("%.2f / %s ,",1.00-a[i],name[i]);
	
	}
	printf("}");
	printf("\ncomplement of B: \n");
	printf("{ ");
	for(i=0;i<5;i++)
	{
	printf("%.2f / %s ,",1.00-b[i],name[i]);
	
	}
	printf("}");
	
}
int main()
{
	for(i=0;i<5;i++)
	{
		printf(" \nEnter your name=");
		scanf("%s",&name[i]);
		printf("Enter your age=");
		scanf("%d",&age[i]);
	}
	printf("{ ");
	for(i=0;i<5;i++)
	{
		if(age[i]<=20)
		{
			a[i]=1;
			printf("%.2f / %s ",a[i],name[i]);
		}
		else if((age[i]>20)&&(age[i]<=30))
		{
			a[i]=(30-age[i])/10.00;
		  printf("%.2f / %s",a[i],name[i]);	
		}
		else if(age[i]>30)
		{
			a[i]=0;
			printf("%.2f / %s",a[i],name[i]);
		}
		printf(", ");
	}
	printf("}");
	printf("\n");
		printf("{ ");
	for(i=0;i<5;i++)
	{
		if(age[i]<=15)
		{
			b[i]=1;
			printf("%.2f / %s ",b[i],name[i]);
		}
		else if((age[i]>15)&&(age[i]<=35))
		{
			b[i]=(30-age[i])/20.00;
		  printf("%.2f / %s",b[i],name[i]);	
		}
		else if(age[i]>35)
		{
			b[i]=0.00;
			printf("%.f / %s",b[i],name[i]);
		}
		printf(", ");
	}
	
	printf("}");
	printf("\n");
	Union();
	Intersection();
	Complement();
}



Output:
Enter your name=Manisha
Enter your age=78

Enter your name=Anshu
Enter your age=46

Enter your name=Deeya
Enter your age=12

Enter your name=Ozil
Enter your age=71

Enter your name=David
Enter your age=43

{ 0.00 / Manisha, 0.00 / Anshu, 1.00 / Deeya , 0.00 / Ozil, 0.00 / David, }
{ 0 / Manisha, 0 / Anshu, 1.00 / Deeya , 0 / Ozil, 0 / David, }

 union:
{  0.00 / Manisha ,0.00 / Anshu ,1.00 / Deeya ,0.00 / Ozil ,0.00 / David ,}

intersection:
{0.00 / Manisha , 0.00 / Anshu , 1.00 / Deeya , 0.00 / Ozil , 0.00 / David , }
complement:

complement of A:
{1.00 / Manisha ,1.00 / Anshu ,0.00 / Deeya ,1.00 / Ozil ,1.00 / David ,}
complement of B:
{ 1.00 / Manisha ,1.00 / Anshu ,0.00 / Deeya ,1.00 / Ozil ,1.00 / David ,}
