#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*tvg_log_cb_t)(char *str, uint32_t len);
void tvg_set_log_callback(tvg_log_cb_t cb);
void _tvg_emit_log(const char *buf, uint32_t len);

#ifdef __cplusplus
}
#endif