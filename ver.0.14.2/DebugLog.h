#pragma once
class DebugLog{
	public:
		void createLog(std::string const&);
		void log(char const*,...);
		void logToFile(std::string const&);
};
