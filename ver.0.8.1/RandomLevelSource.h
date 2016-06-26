#pragma once
class RandomLevelSource{
	public:
		RandomLevelSource(Level *,long,int,bool);
		void buildSurfaces(int,int,uchar *,Biome **);
		void calcWaterDepths(ChunkSource *,int,int);
		void create(int,int);
		void gatherStats(void);
		void getChunk(int,int);
		void getHeights(float *,int,int,int,int,int,int);
		void getMobsAt(MobCategory const&,int,int,int);
		void hasChunk(int,int);
		void postProcess(ChunkSource *,int,int);
		void prepareHeights(int,int,uchar *,void *,float *);
		void shouldSave(void);
		void tick(void);
		void ~RandomLevelSource();
		void ~RandomLevelSource();
};
