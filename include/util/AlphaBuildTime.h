#ifndef D_AlphaBuildTime_H
#define D_AlphaBuildTime_H

///////////////////////////////////////////////////////////////////////////////
//
//  AlphaBuildTime is responsible for recording and reporting when
//  this project library was built
//
///////////////////////////////////////////////////////////////////////////////

class AlphaBuildTime
  {
  public:
    explicit AlphaBuildTime();
    virtual ~AlphaBuildTime();
    
    const char* GetDateTime();

  private:
      
    const char* dateTime;

    AlphaBuildTime(const AlphaBuildTime&);
    AlphaBuildTime& operator=(const AlphaBuildTime&);

  };

#endif  // D_AlphaBuildTime_H
