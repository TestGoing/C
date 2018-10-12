#pragma GCC diagnostic ignored "-Wwrite-strings"

#include <stdio.h>
#include <stdarg.h>

char buffer[80];

int vspfunc( char * format, ... )
{
	va_list aptr;
	int ret;
	va_start( aptr, format );
	ret = vsprintf( buffer, format, aptr );
	va_end( aptr );
	return ( ret );
}

int main()
{
	int i = 5;
	float f = 27.0;
	char test[20]="Hello";

	vspfunc( "%d %f %s", i, f, test );

	printf( "%s\n", buffer );
	return 0;
}