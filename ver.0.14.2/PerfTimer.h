#pragma once
class PerfTimer{
	public:
		void _getIdleQueue(int);
		void _getMostSignificantBit(int);
		void _getStringId(char const*);
		void _roundToPower2(uint);
		void allocate(int);
		void allocateNodes(std::vector<PerfTimer::Node *,std::allocator<PerfTimer::Node *>> &,int);
		void init(std::string const&);
		void pop(void);
		void push(char const*,char const*,int);
		void rawRelease(PerfTimer::Node *,int);
		void releaseNodeChildren(PerfTimer::Node *,int);
};
