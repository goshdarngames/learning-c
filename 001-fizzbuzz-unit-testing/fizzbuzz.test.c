#include "unity.h"

#include "fizzbuzz.h"


void test_foo ( void )
{
}

int main ( void )
{
    UNITY_BEGIN ();

    RUN_TEST ( test_foo );

    return UNITY_END ();
}