#pragma once
class Dimension{
	public:
		Dimension(void);
		void createRandomLevelSource(void);
		void getCloudHeight(void);
		void getFogColor(float,float);
		void getMoonPhase(long);
		void getNew(int);
		void getSunriseColor(float,float);
		void getTimeOfDay(long,float);
		void init(Level *);
		void init(void);
		void isNaturalDimension(void);
		void isValidSpawn(int,int);
		void mayRespawn(void);
		void updateLightRamp(void);
		void ~Dimension();
		void ~Dimension();
};
