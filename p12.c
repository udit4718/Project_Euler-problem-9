#include<stdio.h>
#include<math.h>
long long numberOfDivisors(long long n)
{  long long i,a=0,divisors;

        while(n%2==0)
        {
            n=n/2;
         a++;
        }
        divisors=a+1;
        for(i=3; i<=n; i+=2)
        {  long long b=0;
            while(n%i==0)
            {
                n=n/i;
                b++;
                ;
            }

            divisors*=b+1;
        }

         return divisors;

}

void main()
{
    long long j;
    long long trinum=0;
    for(j=1; ; j++)
    {
        trinum+=j;
        //printf("number = %lld", trinum);
        long long x=numberOfDivisors(trinum);


        if(x>=500)
        {
            printf("%lld",trinum);
            return;
        }
    }

}


