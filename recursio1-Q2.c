//2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void printnaturalrev(int n)
{
   if(n==0)
   return;
 printf("\n%d",n);
 printnaturalrev(n-1);
 
}
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    printf("first N natural numbers in reverse :");
    printnaturalrev(num);
    return 0;
}