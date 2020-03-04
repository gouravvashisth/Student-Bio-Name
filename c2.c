#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
    int x,y;
    printf("Enter two numbers.\n");
    scanf("%d%d",&x,&y);
    printf("Before swapping x=%d and y=%d\n",x,y);
    swap(&x,&y);
    printf("After swapping x=%d and y=%d",x,y);
    return 0;
    getch();
}
void swap(int*a,int*b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
