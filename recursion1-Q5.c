//5. Write a recursive function to print first N even natural numbers
#include<stdio.h>
void printeven(int n)
{
   if(n==0)
   return;
 printeven(n-1);
 printf("\n%d",2*n);
 
 
}
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    printf("first N even natural numbers :");
    printeven(num);
    return 0;
}