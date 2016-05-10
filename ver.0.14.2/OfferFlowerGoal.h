#pragma once
class OfferFlowerGoal{
	public:
		OfferFlowerGoal(IronGolem &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canUse(void);
		void start(void);
		void stop(void);
		void tick(void);
		void ~OfferFlowerGoal();
		void ~OfferFlowerGoal();
};
