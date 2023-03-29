#include<stdio.h>
void main()
{
    int a=12;
    int *ptr1,*ptr2;
    int t;
    ptr1=&a;
    int b=15;
    ptr2=&b;
    printf("Address of the variable %d\n",&a);
    printf("address of using pointer %d\n",ptr1);
    printf("value using pointer %d\n",*ptr1);
    printf("value using variable %d\n",a);
    t=*ptr1;
    *ptr1=*ptr2;
    *ptr2=t;
    printf("a:%d ,b:%d\n",a,b);
    int sum=*ptr1 / *ptr2;
    printf("%d\n",sum);

}