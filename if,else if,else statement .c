#include <stdio.h>
int main()
{
   int age;

   printf("enter your age\n");

   scanf("%d" ,&age);
   printf("you have entered your age %d\n" , age);

   if(age>=18)
{ printf("you can vote !");}

   else if (age>10)
{ printf("you are child and you can vote after 18"); }


   else
{ printf("you cannot vote!");}

   return 0;

}
