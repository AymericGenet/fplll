#include <Windows.h>

#ifndef GETTIMEOFTHEDAY_H_
#define GETTIMEOFTHEDAY_H_

#ifdef _NEED_TIMEVAL
typedef struct timeval {
  long tv_sec;
  long tv_usec;
} timeval;
#endif

int gettimeofday(struct timeval * tp, struct timezone * tzp);

#endif /* GETTIMEOFTHEDAY_H_ */
