#pragma once
class CropTile{
	public:
		CropTile(int,std::string const&);
		void getBasePlantId(void);
		void getBaseSeed(void);
		void getGrowthSpeed(Level *,int,int,int);
		void getRenderShape(void);
		void getResource(int,Random *);
		void getResourceCount(Random *);
		void getTexture(LevelSource *,int,int,int,int);
		void getTexture(int,int);
		void mayPlaceOn(int);
		void onFertilized(Level *,int,int,int);
		void spawnResources(Level *,int,int,int,int,float);
		void tick(Level *,int,int,int,Random *);
		void ~CropTile();
		void ~CropTile();
};
