
#include <stdio.h>

#include "temp.h"

#define F_LOWER  -30
#define F_STEP    15


int main ( void )
{
    float fahr, celsius;

    fahr = F_LOWER;

    for ( int i = 0; i < 10; i++ )
    {
        celsius = convert_F_to_C ( fahr );
    
        printf ( "%3.0f %6.1f\n", fahr, celsius );

        fahr += F_STEP;
    }
}

