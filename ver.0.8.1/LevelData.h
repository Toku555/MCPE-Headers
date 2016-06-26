#pragma once
class LevelData{
	public:
		LevelData(CompoundTag *);
		LevelData(LevelData const&);
		LevelData(LevelSettings const&,std::string const&,int);
		LevelData(void);
		void createTag(std::vector<Player *,std::allocator<Player *>> const&);
		void createTag(void);
		void getDimension(void);
		void getGameType(void);
		void getGeneratorVersion(void);
		void getLastPlayed(void);
		void getLevelName(void);
		void getLoadedPlayerTag(void);
		void getSeed(void);
		void getSizeOnDisk(void);
		void getSpawnMobs(void);
		void getStorageVersion(void);
		void getTagData(CompoundTag const*);
		void getTime(void);
		void getXSpawn(void);
		void getYSpawn(void);
		void getZSpawn(void);
		void operator=(LevelData const&);
		void setDimension(int);
		void setGameType(int);
		void setGeneratorVersion(int);
		void setLevelName(std::string const&);
		void setLoadedPlayerTag(CompoundTag *);
		void setLoadedPlayerTo(Player *);
		void setPlayerTag(CompoundTag *);
		void setSeed(long);
		void setSizeOnDisk(long);
		void setSpawn(int,int,int);
		void setSpawnMobs(bool);
		void setStopTime(long);
		void setStorageVersion(int);
		void setTagData(CompoundTag *,CompoundTag *);
		void setTime(long);
		void setXSpawn(int);
		void setYSpawn(int);
		void setZSpawn(int);
		void v1_read(RakNet::BitStream &,int);
		void v1_write(RakNet::BitStream &);
		void ~LevelData();
};