#include "random.h"

static int m_seed = 0;

int randomInit(const int seed)
{
    m_seed = seed;
    return 0 == m_seed ? -1 : 0;
}

int randomGet()
{
    m_seed = m_seed ^ 0x1234;
    return m_seed ^ 0x5678;
}
