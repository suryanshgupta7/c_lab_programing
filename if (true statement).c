#include <stdio.h>
int main()
{
   int age;
   age=19;
   printf("enter your age\n");

   scanf("%d" ,&age);
   printf("you have entered your age %d\n" , age);

   if(age>18)

{  printf("you can vote !");}

   return 0;

}
