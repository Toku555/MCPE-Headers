#pragma once
class StemTile{
	public:
		StemTile(int,Tile *);
		void getColor(LevelSource *,int,int,int);
		void getColor(int);
		void getConnectDir(LevelSource *,int,int,int);
		void getConnectedTexture(void);
		void getGrowthSpeed(Level *,int,int,int);
		void getRenderShape(void);
		void getResource(int,Random *);
		void getResourceCount(Random *);
		void getTexture(int,int);
		void mayPlaceOn(int);
		void onFertilized(Level *,int,int,int);
		void spawnResources(Level *,int,int,int,int,float);
		void tick(Level *,int,int,int,Random *);
		void updateDefaultShape(void);
		void updateShape(LevelSource *,int,int,int);
		void ~StemTile();
		void ~StemTile();
};
