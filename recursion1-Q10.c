//10. Write a recursive function to print reverse of a given number
#include<stdio.h>
void reversenum(int num)
{   
    int rem,rev=0;
   if(num==0)
    return;

    rem=num%10;
    rev=rev*10+rem;
    printf("%d",rev);
   reversenum(num/10);

}
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("reverse number is");
    reversenum(n);
    return 0;
}