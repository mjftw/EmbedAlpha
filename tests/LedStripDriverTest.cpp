extern "C"
{
#include "LedStripDriver.h"
}

#include "CppUTest/TestHarness.h"

/**************************************
* Test list:
*   + Single Led Tests
*     - Write 0xFFFF to an Led
*     - Write 0x0000 to an Led
*     - Read an Led
*   + Basic Multi Led Tests
*     - Write 0xFFFF to Led 0
*     - Write 0xFFFF to Led 72
*     - Write 0xFFFF to Led 143
*     - Write 0xFFFF to Led -1 does nothing
*     - Write 0xFFFF to Led 144 does nothing
*     - Read from Led 0
*     - Read from Led 72
*     - Read from Led 143
*     - Read from Led -1 does nothing
*     - Read from Led 144 does nothing
*     - Write 0xFFFF to all Leds
*   + RGBI tests
*     - Set an Led intensity to 0
*     - Set an Led intensity to 16
*     - Set an Led intensity to 31
*     - Setting an Led intensity to -1 does nothing
*     - Setting an Led intensity to 32 does nothing
*     - Set an Led red value to 0
*     - Set an Led red value to 128
*     - Set an Led red value to 255
*     - Setting an Led red value to -1 does nothing
*     - Setting an Led red value to 256 does nothing
*     - Set an Led green value to 0
*     - Set an Led green value to 128
*     - Set an Led green value to 255
*     - Setting an Led green value to -1 does nothing
*     - Setting an Led green value to 256 does nothing
*     - Set an Led blue value to 0
*     - Set an Led blue value to 128
*     - Set an Led blue value to 255
*     - Setting an Led blue value to -1 does nothing
*     - Setting an Led blue value to 256 does nothing
*     - Read intensity value from an Led
*     - Read red value from an Led
*     - Read green value from an Led
*     - Read blue value from an Led
**************************************/

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

