#include "gtest/gtest.h"

#include "lib.h"

TEST(sample_test_case, sample_test)
{
    EXPECT_GE(HW1::version(), 0);
}

#if 0
#define BOOST_TEST_MODULE test_version

#include "lib.h"

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_SUITE(test_version)

BOOST_AUTO_TEST_CASE(test_valid_version)
{
	BOOST_CHECK(HW1::version() > 1);
}

BOOST_AUTO_TEST_SUITE_END()
#endif