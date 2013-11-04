
#include <luaconf.h>

// constants from lstrlib.c

#define MAX_ITEM 512
#define FLAGS "-+ #0"

#if LUA_VERSION_NUM >= 502
#if !defined(LUA_INTFRMLEN)
#if defined(LUA_USE_LONGLONG)
#define LUA_INTFRMLEN "ll"
#define LUA_INTFRM_T  long long
#else
#define LUA_INTFRMLEN "l"
#define LUA_INTFRM_T  long
#endif
#endif
#endif

#define MAX_FORMAT (sizeof(FLAGS) + sizeof(LUA_INTFRMLEN) + 10)
