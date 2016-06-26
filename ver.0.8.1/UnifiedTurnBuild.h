#pragma once
class UnifiedTurnBuild{
	public:
		UnifiedTurnBuild(int,int,int,float,float,IInputHolder *,Minecraft *);
		void getSpeedSquared(Entity *);
		void getTurnDelta(void);
		void onConfigChanged(Config const&);
		void tickBuild(Player *,BuildActionIntention *);
		void ~UnifiedTurnBuild();
		void ~UnifiedTurnBuild();
};
