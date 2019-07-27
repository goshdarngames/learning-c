#include "temp.h"

int convert_F_to_C ( int f )
{
    return 5 * ( f - 32 ) / 9;
}

int convert_C_to_F ( int c )
{
    return ( 9 * c )/5 + 32;
}
