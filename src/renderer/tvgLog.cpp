#include "tvgLog.h"

static tvg_log_cb_t g_cb = nullptr;

extern "C" void tvg_set_log_callback(tvg_log_cb_t cb)
{
    g_cb = cb;
}

/* 供内部宏调用的转发函数 */
void _tvg_emit_log(const char *buf, uint32_t len)
{
    if (g_cb) g_cb(const_cast<char*>(buf), len);
}