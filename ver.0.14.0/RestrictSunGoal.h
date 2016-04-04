#pragma once
class RestrictSunGoal{
	public:
		RestrictSunGoal(PathfinderMob &);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void start(void);
		void stop(void);
		void ~RestrictSunGoal();
		void ~RestrictSunGoal();
};
