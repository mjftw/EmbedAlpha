extern "C"
{
#include "LedStripDriver.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(LedStripDriver)
{
    void setup()
    {
      LedStripDriver_Create();
    }

    void teardown()
    {
       LedStripDriver_Destroy();
    }
};

IGNORE_TEST(LedStripDriver, Create)
{
  FAIL("Start here");
}

