#include<stdio.h>
#include<math.h>

void main()
{
    long long number=2;
    long long sum = 0;
    while(number<2000000)
    {
        long isprime=1;
        long long i;
        long long imax=sqrt(number);
        for(i=2; i<=imax; i++)
        {
            if(number%i==0)
            {
                isprime=0;
                break;
            }
        }

        if(isprime==1)
        {
            sum += number;
        }
        number++;
    }
    printf("%lld",sum);
}
