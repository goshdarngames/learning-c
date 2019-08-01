#include <stdio.h>

int main ( void )
{
    long num_chars  = 0;
    long num_tabs   = 0;
    long num_lines  = 0;

    int current_char;

    while ( ( current_char = getchar () ) != EOF )
    {
        num_chars += 1;

        if ( current_char == 9 )
        {
            num_tabs += 1;
        }

        if ( current_char == '\n' )
        {
            num_lines += 1;
        }
    }

    printf ( "char count:  %ld \n", num_chars );

    printf ( "tab count :  %ld \n", num_tabs );

    printf ( "line count:  %ld \n", num_lines );
}
