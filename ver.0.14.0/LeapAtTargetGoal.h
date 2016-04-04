#pragma once
class LeapAtTargetGoal{
	public:
		LeapAtTargetGoal(Mob &,float,bool);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void ~LeapAtTargetGoal();
		void ~LeapAtTargetGoal();
};
