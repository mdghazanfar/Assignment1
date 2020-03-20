#include<stdio.h>
int  Even_odd(int n)
{
     if(n%2==0)
          return 1;
     else
          return 0;
}
int main()
{
     int num,result;
     printf("Enter the number :\n");
     scanf("%d",&num);
     {
          
          result = Even_odd(num);
          if(result==1)
               printf("%d is Even\n",result);
          else
               printf("%d is Odd\n",result);
     }
     return 0;
}