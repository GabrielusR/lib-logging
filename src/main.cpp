#include <iostream>

#include "logging.h"

int main() {

	Log log{};

	log.info("Info msg!");
	log.warn("Warn msg!");
	log.error("Error msg!");

	log.setLevel(LogLevel::ERROR);

	log.info("Info msg!");
	log.warn("Warn msg!");
	log.error("Error msg!");

	return 0;
}
