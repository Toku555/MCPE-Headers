#pragma once
class SkeletonHorseTrapGoal{
	public:
		SkeletonHorseTrapGoal(Horse *);
		SkeletonHorseTrapGoal(Horse *);
		void _createHorse(Difficulty const&);
		void _createHorse(Difficulty const&);
		void _createSkeleton(Difficulty const&,Horse const&);
		void _createSkeleton(Difficulty const&,Horse const&);
		void _getClosestPlayer(void);
		void appendDebugInfo(std::string &);
		void appendDebugInfo(std::string &);
		void canContinueToUse(void);
		void canContinueToUse(void);
		void canUse(void);
		void canUse(void);
		void start(void);
		void start(void);
		void tick(void);
		void tick(void);
		void ~SkeletonHorseTrapGoal();
		void ~SkeletonHorseTrapGoal();
};
