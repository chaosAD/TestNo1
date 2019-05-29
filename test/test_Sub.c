#include "unity.h"
#include "Sub.h"

void setUp(void) {}

void tearDown(void) {}

void test_Sub_given_11_and_18_expect_minus_7() {
  int result = sub(11, 8);
  TEST_ASSERT_EQUAL(-7, result);
}
