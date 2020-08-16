#include "unity.h"
	#include "calculator.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_calculator(void)
	{
  		TEST_ASSERT_EQUAL(30, add(10, 20));
  		TEST_ASSERT_EQUAL(-70, sub(-50, 20));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_calculator);

  		return UNITY_END();
	}
