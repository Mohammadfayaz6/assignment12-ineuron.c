//3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void printodd(int n)
{
   if(n==0)
   return;
 printodd(n-1);
 printf("\n%d",2*n-1);
 
 
}
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    printf("first N odd natural numbers :");
    printodd(num);
    return 0;
}