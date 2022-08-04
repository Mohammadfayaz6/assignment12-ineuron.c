//1. Write a recursive function to print first N natural numbers
#include<stdio.h>
void printnatural(int n)
{
   if(n==0)
   return;
   printnatural(n-1);
   printf("\n%d",n);
}
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    printf("first N natural numbers :");
    printnatural(num);
    return 0;
}