#pragma once
class GameMode{
	public:
		GameMode(PacketSender &,Level &,SoundPlayer &,Vibration &);
		void _creativeDestroyBlock(Player &,BlockPos,signed char);
		void _destroyBlockInternal(Player &,BlockPos,signed char);
		void _releaseUsingItemInternal(Player &);
		void attack(Player &,Entity &);
		void buildBlock(Player &,BlockPos,signed char);
		void continueBuildBlock(Player &,BlockPos,signed char);
		void continueDestroyBlock(Player &,BlockPos,signed char);
		void destroyBlock(Player &,BlockPos,signed char);
		void getDestroyProgress(void);
		void getHitProgress(float);
		void getOldDestroyProgress(void);
		void getPickRange(Player *,InputMode const&,bool);
		void interact(Player &,Entity &);
		void isInTrialMode(void);
		void function<void ();
		void releaseUsingItem(Player &);
		void setTrialMode(bool);
		void startBuildBlock(Player &,BlockPos,signed char);
		void startDestroyBlock(Player &,BlockPos,signed char);
		void stopBuildBlock(Player &);
		void stopDestroyBlock(Player &);
		void tick(void);
		void toggleLongPickRange(void);
		void useItem(Player &,ItemInstance &);
		void useItemOn(Player &,ItemInstance *,BlockPos const&,signed char,Vec3 const&);
		void ~GameMode();
		void ~GameMode();
};
