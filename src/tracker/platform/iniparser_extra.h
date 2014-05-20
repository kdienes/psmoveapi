#ifndef PSMOVE_PLATFORM_INIPARSER_EXTRA_H
#define PSMOVE_PLATFORM_INIPARSER_EXTRA_H

#ifdef __cplusplus
extern "C" {
#endif

#include <iniparser/iniparser.h>

void iniparser_save_ini(dictionary * d, const char * file);
int iniparser_set_int(dictionary * ini, const char * entry, int val);
int iniparser_set_double(dictionary * ini, const char * entry, double val);

#ifdef __cplusplus
}
#endif

#endif /* PSMOVE_TRACKER_LINUXSUPPORT_H */
