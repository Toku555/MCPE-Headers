#pragma once
class PerfTimer{
	public:
		PerfTimer(std::thread::id);
		PerfTimer(std::thread::id);
		void _getIdleQueue(int);
		void _getMostSignificantBit(int);
		void _getStringId(char const*);
		void _getStringId(char const*);
		void _roundToPower2(uint);
		void allocate(int);
		void allocateNodes(std::vector<PerfTimer::Node *,std::allocator<PerfTimer::Node *>> &,int);
		void allocateNodes(std::vector<PerfTimer::Node *,std::allocator<PerfTimer::Node *>> &,int);
		void init(std::string const&);
		void pop(void);
		void push(char const*,char const*,int);
		void push(char const*,char const*,int);
		void rawRelease(PerfTimer::Node *,int);
		void releaseNodeChildren(PerfTimer::Node *,int);
		void releaseNodeChildren(PerfTimer::Node *,int);
		void serialize(PerfTimer::Node const*);
		void ~PerfTimer();
		void ~PerfTimer();
};
