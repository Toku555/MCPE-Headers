#pragma once
class ThreadCollection{
	public:
		ThreadCollection(uint);
		void enqueue(std::shared_ptr<Job>);
		void processUIThread(void);
		void ~ThreadCollection();
};
