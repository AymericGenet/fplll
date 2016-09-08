#include <Windows.h>

#ifndef GETTIMEOFTHEDAY_H_
#define GETTIMEOFTHEDAY_H_

typedef struct timeval {
  long tv_sec;
  long tv_usec;
} timeval;

int gettimeofday(struct timeval * tp, struct timezone * tzp);

#endif /* GETTIMEOFTHEDAY_H_ */
