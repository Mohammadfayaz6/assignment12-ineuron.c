//8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void Dectobinary(int n)
{
    if(n==0)
    return;
    Dectobinary(n>>1);
    printf("%d",n&1);

}
 int main()
 {
    int x;
    printf("Enter decimal number\n");
    scanf("%d",&x);
    printf("binary of given decimal numbers is:\n");
    Dectobinary(x);
    return 0;

 }