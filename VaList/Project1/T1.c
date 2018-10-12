#include <stdarg.h>
#include <stdio.h>

int AveInt( int, ... );

int main( void )
{
	printf( "%d\t", AveInt( 2, 2, 3 ) );
	printf( "%d\t", AveInt( 4, 2, 4, 6, 8 ) );
}

int AveInt( int v, ... )
{
	int ReturnValue = 0;
	int i = v;
	va_list ap;
	va_start( ap, v );

	while( i > 0 )
	{
		ReturnValue += va_arg( ap, int );
		i--;
	}
	va_end( ap );
	return ReturnValue /= v;
}