#pragma once
class SurvivalMode{
	public:
		SurvivalMode(PacketSender &,Level &,SoundPlayer &,Vibration &);
		void _messagePlayers(std::string);
		void _showTrialReminder(bool);
		void destroyBlock(Player &,BlockPos,signed char);
		void isInTrialMode(void);
		void setTrialMode(bool);
		void startDestroyBlock(Player &,BlockPos,signed char);
		void useItem(Player &,ItemInstance &);
		void useItemOn(Player &,ItemInstance *,BlockPos const&,signed char,Vec3 const&);
		void ~SurvivalMode();
		void ~SurvivalMode();
};
