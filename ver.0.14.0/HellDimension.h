#pragma once
class HellDimension{
	public:
		HellDimension(Level &);
		void getFogColor(float);
		void getFogDistanceScale(void);
		void getName(void);
		void getTimeOfDay(int,float);
		void init(void);
		void isFoggyAt(int,int);
		void isNaturalDimension(void);
		void isValidSpawn(int,int);
		void mayRespawn(void);
		void updateLightRamp(void);
		void ~HellDimension();
		void ~HellDimension();
};
