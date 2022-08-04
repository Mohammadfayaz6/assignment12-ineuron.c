//6. Write a recursive function to print first N even natural numbers in reverse order
#include<stdio.h>
void printevenrev(int n)
{
   if(n==0)
   return;
printf("\n%d",2*n);
 printevenrev(n-1);
 
 
 
}
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    printf("first N even natural numbers in reverse :");
    printevenrev(num);
    return 0;
}