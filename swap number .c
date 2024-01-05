#include<stdio.h>
int main()
{
    int a,b,c;
    a=8;
    b=9;
    c=b;
    b=a;
    a=c;
    printf("after swaping the value of a is %d\n",a);
    printf("after swaping the value of b is %d\n",b);


    return 0;
}
