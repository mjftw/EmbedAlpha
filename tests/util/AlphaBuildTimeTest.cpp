#include "CppUTest/TestHarness.h"
#include "AlphaBuildTime.h"

TEST_GROUP(AlphaBuildTime)
{
  AlphaBuildTime* projectBuildTime;

  void setup()
  {
    projectBuildTime = new AlphaBuildTime();
  }
  void teardown()
  {
    delete projectBuildTime;
  }
};

TEST(AlphaBuildTime, Create)
{
  CHECK(0 != projectBuildTime->GetDateTime());
}

