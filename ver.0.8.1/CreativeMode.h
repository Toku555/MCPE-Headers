#pragma once
class CreativeMode{
	public:
		CreativeMode(Minecraft *);
		void continueDestroyBlock(int,int,int,int);
		void creativeDestroyBlock(int,int,int,int);
		void initAbilities(Abilities &);
		void isCreativeType(void);
		void releaseUsingItem(Player *);
		void startDestroyBlock(int,int,int,int);
		void stopDestroyBlock(void);
		void ~CreativeMode();
		void ~CreativeMode();
};
