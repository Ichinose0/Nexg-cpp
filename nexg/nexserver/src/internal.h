#pragma once

#include <Nexg.h>
#include <stdlib.h>
#include <time.h>

#define MAXSHORT 65536

NID genId() {
	static int INITIALIZED = 0;
	if (!INITIALIZED) {
		srand((unsigned)time(NULL));
		INITIALIZED = 1;
	}
	return rand() % MAXSHORT;
}