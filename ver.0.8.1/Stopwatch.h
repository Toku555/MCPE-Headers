#pragma once
class Stopwatch{
	public:
		Stopwatch(void);
		void getCount(void);
		void getLast(void);
		void getMax(void);
		void getTotal(void);
		void print(std::string const&);
		void printEvery(int,std::string const&);
		void reset(void);
		void start(void);
		void stop(void);
		void stopContinue(void);
		void ~Stopwatch();
		void ~Stopwatch();
};
