#include<stdio.h>
void main()
{
  int a,b,c,step;
  printf("enter a");
  scanf("%d",&a);
  printf("enter b");
  scanf("%d",&b);
  c=a>b?a:b;
  step=c;
  while(1)
  {
     if(c%a==0&&c%b==0)
      {
         printf("the lcm is %d",c);
         break;
         else
         c=c+step;
       }
   }
}