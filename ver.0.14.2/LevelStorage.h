#pragma once
class LevelStorage{
	public:
		void loadData(std::string const&);
		void loadPlayerData(Player const&);
		void saveData(std::string const&,CompoundTag const&);
		void savePlayerData(std::string const&,CompoundTag const&);
		void ~LevelStorage();
		void ~LevelStorage();
};
