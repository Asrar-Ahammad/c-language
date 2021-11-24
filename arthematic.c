#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("\nEnter value of b :");
    scanf("%d",&b);
    printf("\nThe sum of a and b is %d",a+b);
    printf("\nThe difference of a and b is %d",a-b);
    printf("\nThe multiplication of a and b is %d",a*b);
    printf("\nThe division of a and b is %d",a/b);
    printf("\nThe modulo division of a and b is %d\n",a%b);
    return 0;
}