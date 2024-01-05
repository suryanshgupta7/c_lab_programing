#include<stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
    //if you want default to print than dont use break
    switch(age)
    {
        case 3:
        printf("age is 3");

        case 13:
        printf("age is 13");


        case 23:
        printf("age is 23");


        default:
        printf("age is not 3,13,23 ");



    }


    return 0;
}
