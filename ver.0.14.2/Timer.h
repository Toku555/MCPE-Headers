#pragma once
class Timer{
	public:
		Timer(float);
		void advanceTime(void);
		void advanceTimeQuickly(void);
		void getAlpha(void);
		void getTicks(void);
		void getTime(void);
		void getTimeScale(void);
		void setTimeScale(float);
		void skipTime(void);
		void stepTick(int);
		void stepping(void);
};
