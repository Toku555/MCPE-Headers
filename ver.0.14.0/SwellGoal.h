#pragma once
class SwellGoal{
	public:
		SwellGoal(Creeper *);
		void appendDebugInfo(std::string &);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~SwellGoal();
		void ~SwellGoal();
};
