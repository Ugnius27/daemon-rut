#pragma once

#include "tuyalink_core.h"
#include "tuya_error_code.h"
#include "arguments.h" // Should probably not have this module depend on this.

char *create_sysinfo_json();

int tuya_init(tuya_mqtt_context_t *context, struct arguments args);

void log_sysinfo(char *json_string);
