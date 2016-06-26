#pragma once
class Goal{
	public:
		Goal(void);
		void canContinueToUse(void);
		void canInterrupt(void);
		void getRequiredControlFlags(void);
		void setRequiredControlFlags(int);
		void start(void);
		void stop(void);
		void tick(void);
		void ~Goal();
		void ~Goal();
};
