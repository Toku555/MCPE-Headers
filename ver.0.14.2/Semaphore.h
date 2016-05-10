#pragma once
class Semaphore{
	public:
		Semaphore(bool);
		void notify(void);
		void wait(void);
};
