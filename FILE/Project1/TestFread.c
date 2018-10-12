#include <stdio.h>
#include <string.h>

int main()
{
	FILE * fp;
	char c[] = "This is runoob";
	char buffer[20];

	fp = fopen( "file.txt", "w+" );
	fwrite( c, strlen( c ) + 1, 1, fp );

	fseek( fp, SEEK_SET, 0 );

	fread( buffer, strlen( c ) + 1, 1, fp );
	printf( "%s\n", buffer );
	fclose( fp );

	return 0;
}