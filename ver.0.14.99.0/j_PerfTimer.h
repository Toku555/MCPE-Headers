#pragma once
namespace j{
	class PerfTimer{
		public:
		void allocateNodes(std::vector<PerfTimer::Node *,std::allocator<PerfTimer::Node *>> &,int);
	}
};
