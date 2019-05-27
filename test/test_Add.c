#include "unity.h"
#include "Add.h"

void setUp(void) {}

void tearDown(void) {}

void test_Add_given_2_and_3_expect_5() {
  int result = add(2, 3);
  TEST_ASSERT_EQUAL(5, result);
}

void test_Add_given_6_and_7_expect_13() {
  int result = add(6, 7);
  TEST_ASSERT_EQUAL(13, result);
}
