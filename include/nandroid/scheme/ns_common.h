#ifndef NANDROID_NS_COMMON_H
#define NANDROID_NS_COMMON_H

#include <sys/types.h>
#include <stdint.h>
#include "../common.h"

HEADER_BEGIN

typedef unsigned char ns_byte;
typedef unsigned char ns_bool;

#define ns_true 1
#define ns_false 0

#ifndef NS_DEBUG
#define NS_DEBUG 1
#endif

uint32_t ns_hash(char* data);

HEADER_END

#endif