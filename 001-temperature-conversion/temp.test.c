#include "unity.h"

#include "temp.h"

void setUp ( void )
{
}

void tearDown ( void )
{
}

void test_convert_F_to_C ( void )
{
    TEST_ASSERT ( convert_F_to_C ( 0 ) == -17 );
}

