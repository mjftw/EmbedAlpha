extern "C"
{
#include "FakeLedStrip.h"
}

#include "CppUTest/TestHarness.h"

/**************************************
* Test list:
*   + Single Led Tests
*     - Write 0xFFFF to an Led
*     - Write 0x0000 to an Led
*     - Write Intensity, Red, Green, Blue (irgb) value to an Led
*     - Read an Led
*   + Multi Led Tests (all white)
*     - Write to Led 0
*     - Write to Led 72
*     - Write to Led 143
*     - Write to Led -1 does nothing
*     - Write to Led 144 does nothing
*     - Read from Led 0
*     - Read from Led 72
*     - Read from Led 143
*     - Read from Led -1 does nothing
*     - Read from Led 144 does nothing
*     - Write 0xFFFF to all Leds 
**************************************/


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

