#include <iostream>
#include <dlfcn.h>

#include "logging.h"

int main() {

	void * libHandle = dlopen("./build/liblogd.so", RTLD_LAZY);

	if(!libHandle) exit(EXIT_FAILURE);

	const char * (*libVersion)(void);

	libVersion = reinterpret_cast<const char*(*)()>( dlsym(libHandle, "libVersion") );

	std::cout << libVersion() << std::endl;	

	dlclose(libHandle);

#if 0
	Log log{};

	log.info("Info msg!");
	log.warn("Warn msg!");
	log.error("Error msg!");

	log.setLevel(LogLevel::ERROR);

	log.info("Info msg!");
	log.warn("Warn msg!");
	log.error("Error msg!");
#endif

	return 0;
}
