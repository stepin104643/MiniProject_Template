#include "unity.h"
#include "isprime.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_isprime(void)
{
  TEST_ASSERT_EQUAL(1, isprime(5));
  TEST_ASSERT_EQUAL(1, isprime(7));
  TEST_ASSERT_EQUAL(0, isprime(6));
}
void test_zero_one(void)
{
  TEST_ASSERT_EQUAL(0, isprime(0));
  TEST_ASSERT_EQUAL(0, isprime(1));
}
void test_negative(void)
{
  TEST_ASSERT_EQUAL(0, isprime(-5));
  TEST_ASSERT_EQUAL(0, isprime(-10));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_isprime);
  RUN_TEST(test_zero_one);
  RUN_TEST(test_negative);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
