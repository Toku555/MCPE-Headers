#pragma once
class TickNextTickData{
	public:
		TickNextTickData(int,int,int,int);
		void hashCode(void);
		void operator<(TickNextTickData const&);
		void operator==(TickNextTickData const&);
		void setDelay(long);
};
