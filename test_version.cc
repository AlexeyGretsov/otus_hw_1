#include "gtest/gtest.h"

#include "lib.h"

TEST(sample_test_case, sample_test)
{
    EXPECT_GE(HW1::version(), 0);
}

