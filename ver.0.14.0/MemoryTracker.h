#pragma once
class MemoryTracker{
	public:
		MemoryTracker(std::string const&,MemoryTracker*);
		void memoryStats(void);
		void ~MemoryTracker();
		void ~MemoryTracker();
};
