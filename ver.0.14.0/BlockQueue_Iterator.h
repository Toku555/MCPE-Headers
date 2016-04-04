#pragma once
namespace BlockQueue{
	class Iterator{
		public:
		void Iterator(BlockQueue&,int);
		void operator!=(BlockQueue::Iterator const&);
		void operator*(void);
		void operator++(void);
		void add(BlockPos const&);
		void begin(void);
		void empty(void);
		void end(void);
		void getIndexCount(void);
		void getQueue(void);
		void getSize(void);
		void reset(void);
		void setIndexCount(int);
	}
};
