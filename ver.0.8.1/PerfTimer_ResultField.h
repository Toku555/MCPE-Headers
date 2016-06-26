#pragma once
namespace PerfTimer{
	class ResultField{
		public:
		void ResultField(PerfTimer::ResultField&&);
		void getColor(void);
		void operator<(PerfTimer::ResultField const&);
		void operator=(PerfTimer::ResultField&&);
		void ~ResultField();
		void getLog(std::string const&);
		void pop(void);
		void popPush(std::string const&);
		void push(std::string const&);
		void reset(void);
	}
};
