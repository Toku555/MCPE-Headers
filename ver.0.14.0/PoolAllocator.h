#pragma once
class PoolAllocator{
	public:
		PoolAllocator(int);
		void get(void);
		void getStats(void);
		void release(void *);
		void trim(void);
		void ~PoolAllocator();
		void ~PoolAllocator();
};
