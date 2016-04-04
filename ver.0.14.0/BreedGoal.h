#pragma once
class BreedGoal{
	public:
		BreedGoal(Animal &,float);
		void _breed(void);
		void _createOffspring(Animal &);
		void _moveToFreePartner(void);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void stop(void);
		void tick(void);
		void ~BreedGoal();
		void ~BreedGoal();
};
