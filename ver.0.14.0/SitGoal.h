#pragma once
class SitGoal{
	public:
		SitGoal(TamableAnimal *);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void start(void);
		void stop(void);
		void wantToSit(bool);
		void ~SitGoal();
		void ~SitGoal();
};
