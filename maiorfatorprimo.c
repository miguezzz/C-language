#include<stdio.h>
#include<math.h>

int main(void) {

    long long n = 600851475143, i, maior;
    int d;

    i = 3;
    for(i; i * i <= n; i += 2)
   {
   
        if(n % i == 0)
       {
            for(d = 3; i % d != 0; d += 2)
            {
            
            if(pow(d, 2.0) >= i)
                if(d < i && i % d == 0)
                {
                    break;
                }
                else
                {
                    maior = i;
                    break;
                }
            }
       }
   }
           
    printf("%lld\n",maior);
    
    return 0;

}