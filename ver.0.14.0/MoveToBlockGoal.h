#pragma once
class MoveToBlockGoal{
	public:
		MoveToBlockGoal(Mob *,float,int,float);
		void _canReach(BlockPos const&);
		void canContinueToUse(void);
		void canUse(void);
		void findNearestBlock(void);
		void isReachedTarget(void);
		void start(void);
		void tick(void);
		void ~MoveToBlockGoal();
		void ~MoveToBlockGoal();
};
