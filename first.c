#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,rem,sum=0;
    printf("Enter the number\n\n");
    scanf("%d",&n);
    while (n>0)
    {
        
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        /* code */
    }
    printf("sum=%d",sum);
    
}