#include <stdio.h>
int main(){
    int r, c, a[100][100], b[100][100], meet[100][100], i, j,join[100][100];

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("Enter element a%d%d: ",i+1, j+1);
            scanf("%d", &b[i][j]);
        }

    // meet of  Two matrices

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {
           meet[i][j]=a[i][j]*b[i][j];
        }

    // Displaying the result
    printf("\nmeet of two matrix is: \n\n");

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            printf("%d   ",meet[i][j]);

            if(j==c-1)
            {
                printf("\n\n");
            }
        }
        
    for (i=0;i<r;i++)
    {
    	
    	for (j=0;j<c;j++)
    	{
		   if((a[i][j] or b[i][j])==1)
		   {
		   join[i][j]=1;
		   }
		   else 
		   {
		   join[i][j]=0;
		   }
		}
	}
	printf("\njoin of two matrix is: \n\n");

    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
        {

            printf("%d   ",join[i][j]);

            if(j==c-1)
            {
                printf("\n\n");
            }
        }
        
    
    return 0;
}
