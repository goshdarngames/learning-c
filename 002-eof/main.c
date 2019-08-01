#include <stdio.h>

int main ( void )
{
    printf ( "Hello \n" );

    printf ( "EOF == %d \n", EOF );

    int c;

    int gc_result = ( ( c = getchar () ) != EOF );

    printf ( "c = %d \n", c );

    printf ( "GC Result = %d \n", gc_result );
}
