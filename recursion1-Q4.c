//4. Write a recursive function to print first N odd natural numbers in reverse order
#include<stdio.h>
void printoddrev(int n)
{
   if(n==0)
   return;
 printf("\n%d",2*n-1);
 printoddrev(n-1);
 
 
}
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    printf("first N odd natural numbers in reverse :");
    printoddrev(num);
    return 0;
}