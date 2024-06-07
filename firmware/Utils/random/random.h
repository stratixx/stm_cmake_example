#ifndef UTILS_RANDOM_H
#define UTILS_RANDOM_H

#ifdef __cplusplus
extern "C" {
#endif

int randomInit(const int seed);
int randomGet();

#ifdef __cplusplus
}
#endif

#endif  // UTILS_RANDOM_H
