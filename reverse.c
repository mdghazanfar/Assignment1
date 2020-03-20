#include <stdio.h>
int Reverse(int num)
{
    int sum=0;
    while (num > 0)
    {
        sum = sum*10 + num%10;
        num = num/10;

    }
      return sum;
      
}   
      int main()      
        {
            int num,result;
            printf("enter the number:\n");
            scanf("%d",&num);
            result = Reverse(num);
            printf("Reverse number is:%d=%d",num,result);
             return 0;
        }    
        
