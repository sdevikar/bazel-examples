#ifndef __COMMON_H__
#define __COMMON_H__

#include <ctime>

char *getTime()
{
    time_t now = time(0);
    char *dt = ctime(&now);
    return dt;
};

#endif