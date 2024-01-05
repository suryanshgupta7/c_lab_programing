#include<stdio.h>
int main()
{
    int a=70;
    int* ptra=&a;
    int* ptr2=NULL;
      printf("the address of pointer a is %p\n=",&a);
      printf("the address of pointer a is %p\n=",&ptra);
      printf("the address of pointer a is %p\n=",ptra);
      printf("the value of pointer a is %d\n=",a);
      printf("the value of pointer a is %d\n=",*ptra);
      printf("the address of some pointer is %p\n=",ptr2);


   return 0;


}
