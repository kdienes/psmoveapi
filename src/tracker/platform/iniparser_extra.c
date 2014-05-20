#include <iniparser/iniparser.h>

void iniparser_save_ini(dictionary * d, const char * file) {
	FILE *pFile;
	pFile = fopen(file, "w");

	if (pFile != NULL) {
		iniparser_dump_ini(d, pFile);
		fclose(pFile);
	}
}

int iniparser_set_int(dictionary * ini, const char * entry, int val) {
	char str[256];
	sprintf(str, "%d", val);
	return iniparser_set(ini, entry, str);
}

int iniparser_set_double(dictionary * ini, const char * entry, double val) {
	char str[256];
	sprintf(str, "%f", val);
	return iniparser_set(ini, entry, str);
}
