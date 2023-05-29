#include<Stdio.h>
int main()
{
    int r;
    printf("enter your row:->");
    scanf("%d",&r);
    int c; 
    printf("enter your colum:->");
    scanf("%d",&c);

    int arr[r][c];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sum=sum+arr[i][j];

        }
        
    }
    printf(" sum is:-> %d  ",sum);

}