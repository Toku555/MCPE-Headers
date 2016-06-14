#pragma once
class StopwatchHandler{
	public:
		void clear(std::string const&);
		void clearAll(void);
		void clearAll(void);
		void get(std::string const&);
		void print(void);
		void printEvery(int);
		void ~StopwatchHandler();
};
