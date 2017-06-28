#include "AlphaBuildTime.h"

AlphaBuildTime::AlphaBuildTime()
: dateTime(__DATE__ " " __TIME__)
{
}

AlphaBuildTime::~AlphaBuildTime()
{
}

const char* AlphaBuildTime::GetDateTime()
{
    return dateTime;
}

