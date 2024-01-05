//with formula

/*
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the value of n ");
    scanf("%d",&n);
    // a,d,ap=a+(n-1)d,4+(n-1)3,3n+1
    for(i=4;i<=3*n+1;i=i+3)
    {
        printf(" %d ",i);
    }
}

*/
//without formula

#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n ");
    scanf("%d",&n);
    int a=4;
    for(int i=1;i<=n;i++)
    {
        printf(" %d ",a);
        a=a+3;
    }
}
