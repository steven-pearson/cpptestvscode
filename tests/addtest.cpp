// LCOV_EXCL_START
#include <gtest/gtest.h>
// LCOV_EXCL_STOP
#include "../src/cpptest.h"

TEST(AddTestSuite, simpleAdd)
{
  EXPECT_EQ(add(2, 2), 4) << "The add is not correct using double inputs";
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}