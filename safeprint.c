#include "safeprint.h"

SemaphoreHandle_t safeprint_mutex;

void safeprint_init(void) {
	safeprint_mutex = xSemaphoreCreateMutex();
}

void safeprint(char* arg) {
	// TODO take mutex and print and release mutex
}