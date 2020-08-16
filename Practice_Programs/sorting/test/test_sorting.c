	#include "unity.h"
	#include "sorting.h"

	void setUp()
	{	}
	void tearDown()
	{	}
	
	void test_sorting(void)
	{
  		TEST_ASSERT_EQUAL([30,50], sorting(2,arr));
  		TEST_ASSERT_EQUAL([40,50], sorting(2, arr));
	}

	int test_main(void)
	{
	  	UNITY_BEGIN();
  	
	  	RUN_TEST(test_sorting);

  		return UNITY_END();
	}
