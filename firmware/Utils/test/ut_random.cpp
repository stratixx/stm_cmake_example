#include <gtest/gtest.h>

#include "random/random.h"

class UT_Random : public ::testing::Test
{
protected:
    void SetUp()
    {

    }

    void TearDown()
    {

    }
};

TEST_F(UT_Random, initNonZero)
{
    EXPECT_EQ(0, randomInit(1));
}

TEST_F(UT_Random, initZero)
{
    EXPECT_EQ(-1, randomInit(0));
}

TEST_F(UT_Random, get)
{
    randomInit(1);
    auto random1 = randomGet();
    auto random2 = randomGet();

    EXPECT_TRUE(random1 != random2);
}
