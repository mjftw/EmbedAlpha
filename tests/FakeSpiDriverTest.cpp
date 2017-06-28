extern "C"
{
#include "FakeSpiDriver.h"
}

#include "CppUTest/TestHarness.h"

TEST_GROUP(FakeSpiDriver)
{
    void setup()
    {
      FakeSpiDriver_Create();
    }

    void teardown()
    {
       FakeSpiDriver_Destroy();
    }
};

IGNORE_TEST(FakeSpiDriver, Create)
{
  FAIL("Start here");
}

