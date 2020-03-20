#include<stdio.h>
 void multiplicationTable(int n)
 {
     int i;
     for(i=1;i<=10;i++)
     {
        printf("%d x %d = %d\n",n,i,n*i);
     }
 }
 int main()
 {
     int num;
     printf("enter the  multiplication number:");
     scanf("%d", &num);
     multiplicationTable(num);
     return 0;
 }