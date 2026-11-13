#include <iostream>

#include "utils.h"
#include "logging.h"

extern "C" const char * libVersion() { return "V.1.0"; };

void Log::setLevel(LogLevel level) {
	
	m_logLevel = {level};
}
 
Log::Log() {
	
	setLevel(LogLevel::INFO);
	
	LOG(std::cout, "Initializing log system...");
}

Log::Log(LogLevel level) {
	
	setLevel(level);
	
	LOG(std::cout, "Initializing log system...");
}

Log::~Log() {
	
	DEBUG("Unitializing log system...");
}

void Log::info(const char * msg) const {
	
	if(m_logLevel >= LogLevel::INFO)
		std::cout << "[INFO]: " << msg << std::endl;
}

void Log::warn(const char * msg) const {
	
	if(m_logLevel >= LogLevel::WARN)
		std::cout << "[WARNING]: " << msg << std::endl;
}	

void Log::error(const char * msg) const {
	
	if(m_logLevel >= LogLevel::ERROR)
		std::cout << "[ERROR]: " << msg << std::endl;
}

