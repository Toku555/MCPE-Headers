#pragma once
class MultiPlayerLevel{
	public:
		void addEntity(Entity *);
		void addToTickNextTick(int,int,int,int,int);
		void createChunkSource(void);
		void putEntity(int,Entity *);
		void tick(void);
		void tickPendingTicks(bool);
		void tickTiles(void);
		void ~MultiPlayerLevel();
		void ~MultiPlayerLevel();
};
