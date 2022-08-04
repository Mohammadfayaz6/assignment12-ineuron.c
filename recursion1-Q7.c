//7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void printsquares(int n)
{
   if(n==0)
   return;
 printsquares(n-1);
 printf("\n%d",n*n);

}
int main()
{
    int num;
    printf("Enter any number\n");
    scanf("%d",&num);
    printf("squares of first N natural numbers");
    printsquares(num);
    return 0;
}