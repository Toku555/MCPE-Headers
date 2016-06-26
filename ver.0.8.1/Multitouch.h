#pragma once
class Multitouch{
	public:
		void commit(void);
		void feed(char,char,short,short,char);
		void reset(void);
		void resetThisUpdate(void);
};
