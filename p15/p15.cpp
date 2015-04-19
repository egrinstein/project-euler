#include <iostream>
using namespace std ;


unsigned long long  nChoosek( unsigned n, unsigned k )
{
        if (k > n) return 0;
        if (k * 2 > n) k = n-k;
        if (k == 0) return 1;

        long result = n;
        for( int i = 2; i <= k; ++i ) {
           result *= (n-i+1);
           result /= i;
        }
        return result;
}
int main( void )
{
    cout << nChoosek( 40 , 20 ) ;
    return 0 ;
}



