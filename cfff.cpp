
#include <cstdio>
#include<cmath>
#include <ctime>

bool isPrime(int n)
{
    if(n<2)
            return false;
    for(int i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)
            return false ;
    }

    return true;
}

int main() {

    clock_t t = clock();
    int rang;
    scanf("%d",&rang);
    int numberOfPrime = 0;

    for ( int i = 2; i <= rang; i++ ) {
        if ( isPrime(i)==true ) {
            numberOfPrime++;
        }
    }

    t = clock() - t;

    printf ("Number of Prime: %d\n", numberOfPrime);

   printf ("Time needed: %f\n", ((float)t) / CLOCKS_PER_SEC);
}
