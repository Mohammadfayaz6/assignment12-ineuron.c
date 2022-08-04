//9. Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void octal(int n)
{
    if(n==0)
    return;
    octal(n/10);
    printf("%d",n%8);

}
 int main()
 {
    int num;
    printf("Enter decimal number\n");
    scanf("%d",&num);
    printf("octal of a given decimal number is:\n");
    octal(num);
    return 0;

 }