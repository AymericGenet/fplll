#include "sieve_gauss.h"
#include <stdio.h>
#include <iostream>
#include <fstream>

#ifdef _WIN32
  #include <winsock.h>
  #include "wgetopt.h"
#else
  #include <unistd.h>
  #include <getopt.h>
#endif

#if 0
long dot_time;
long dot_num;
long count_bad;
#endif
