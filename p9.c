#include<stdio.h>

void main()
{
int a,b,c;
  for(a=1;a<998;a++)
  {
    for(b=a+1;b<999;b++)
    {
      for(c=b+1;c<1000;c++)
       {
          if ((a*a+b*b==c*c)&&(a+b+c==1000))
           {
            printf("%d",a*b*c);
            return;
           }
        }
      }
    }
}
