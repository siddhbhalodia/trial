#include<stdio.h>
int main()
{
    int a,i,j,k=0;
    int arr[a];
    scanf("%d",&a);
    
    for(i=0;i<=(a-1);i++)
    {
       scanf("%d",&arr[i]); 
    }
    for(j=0;j<=(a-1);j++)
    {
        k=k+arr[j];
    }
    printf("%d",k);
    return 0;
}
