#pragma once
class Weather{
	public:
		Weather(Dimension &);
		void _prepareWeather(void);
		void calcRainCycleTime(void);
		void calcRainDuration(void);
		void calcSnowBlockDepth(BlockSource &,BlockPos const&,int);
		void canPlaceTopSnow(BlockSource &,BlockPos const&,bool,bool,int *);
		void getFogLevel(void);
		void getLightningLevel(float);
		void getRainLevel(float);
		void getSkyFlashTime(void);
		void isLightning(void);
		void isRaining(void);
		void isRainingAt(BlockPos const&);
		void isSnowingAt(BlockPos const&);
		void levelEvent(LevelEvent,Vec3 const&,int);
		void rebuildTopSnowToDepth(BlockSource &,BlockPos const&,int);
		void serverTick(void);
		void setFogLevel(float);
		void setLightningLevel(float);
		void setRainLevel(float);
		void setSkyFlashTime(int);
		void stop(void);
		void tick(void);
		void tryToPlaceTopSnow(BlockSource &,BlockPos const&,bool,bool);
		void ~Weather();
		void ~Weather();
};
