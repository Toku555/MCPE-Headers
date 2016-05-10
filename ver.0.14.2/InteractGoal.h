#pragma once
class InteractGoal{
	public:
		InteractGoal(Mob &,float,EntityType);
		InteractGoal(Mob &,float,EntityType,float);
		void appendDebugInfo(std::string &);
		void ~InteractGoal();
		void ~InteractGoal();
};
