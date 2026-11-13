#pragma once 

enum LogLevel {
	
	INFO, WARN, ERROR
};

class Log {
	
private:


protected:

	short m_logLevel = {};

		
public:

	void setLevel(LogLevel level);

	Log();
		
	explicit Log(LogLevel level);	

	~Log();
	
	void info(const char * msg) const;	
	void warn(const char * msg) const;	
	void error(const char * msg) const;
};

