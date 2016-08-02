
#include <mockcpp/Ignore.h>
#include <mockcpp/types/Any.h>

MOCKCPP_NS_START

///////////////////////////////////////////////

const Any ignore = Any(Ignore());

Any& getIgnore()
{
    return const_cast<Any&>(ignore);
}

///////////////////////////////////////////////

MOCKCPP_NS_END



