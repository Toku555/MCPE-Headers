#pragma once
class NetherReactorTileEntity{
	public:
		void GetLowOddsSpawnItem(void);
		NetherReactorTileEntity(void);
		void buildCrockedRoofVolume(bool,int,int,int,int,int,int);
		void buildDome(int,int,int);
		void buildFloorVolume(int,int,int,int,int,int);
		void buildHollowedVolume(int,int,int,int,int,int,int);
		void checkLevelChange(int);
		void clearDomeSpace(int,int,int);
		void deterioateCrockedRoofVolume(bool,int,int,int,int,int,int);
		void deterioateDome(int,int,int);
		void deterioateHollowedVolume(int,int,int,int,int,int);
		void finishReactorRun(void);
		void getName(void);
		void getNumEnemiesPerLevel(int);
		void getNumItemsPerLevel(int);
		void getSpawnItem(void);
		void getSpawnPosition(float,float,float);
		void isEdge(int,int,int);
		void killPigZombies(void);
		void lightItUp(int,int,int);
		void load(CompoundTag *);
		void numOfFreeEnemySlots(void);
		void playersAreCloseBy(void);
		void save(CompoundTag *);
		void shouldSave(void);
		void spawnEnemy(void);
		void spawnItem(void);
		void spawnItems(int);
		void tick(void);
		void tickGlowingRedstoneTransformation(int);
		void trySpawnPigZombies(int,int);
		void turnGlowingObsidianLayerToObsidian(int);
		void turnLayerToGlowingObsidian(int,int);
		void ~NetherReactorTileEntity();
		void ~NetherReactorTileEntity();
};
