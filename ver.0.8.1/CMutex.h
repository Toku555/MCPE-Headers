#pragma once
class CMutex{
	public:
		CMutex(void);
		void lock(void);
		void unlock(void);
		void ~CMutex();
};
