extern "C"
{
#include "FakeLedStrip.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(FakeLedStrip)
{
    void setup()
    {
    }

    void teardown()
    {
    }
};

IGNORE_TEST(FakeLedStrip, Create)
{
  FAIL("Start here");
}

