#pragma once
class SurvivalMode{
	public:
		SurvivalMode(Minecraft *);
		void canHurtPlayer(void);
		void continueDestroyBlock(int,int,int,int);
		void destroyBlock(int,int,int,int);
		void initAbilities(Abilities &);
		void isSurvivalType(void);
		void startDestroyBlock(int,int,int,int);
		void stopDestroyBlock(void);
		void ~SurvivalMode();
		void ~SurvivalMode();
};
