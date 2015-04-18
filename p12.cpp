using namespace std ;
#include <cstdio>
#include <iostream>
#include <cmath>

int divisors( int num )
{
	int divs = 2;

	for ( int i = 2; i <= num/2 +1; i++ ) 
	{
		if ( num % i == 0 )
		{
			divs++;
		}
	}
	return divs;
}



int main(void)
{

	int tri = 1;
	int i = 2;
	while ( divisors( tri ) <= 500)
	{
		tri += i;
		i++;
    }
	printf("%d,%d\n",tri,divisors(tri));
	

}
