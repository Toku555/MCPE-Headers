#pragma once
class PerlinNoise{
	public:
		PerlinNoise(Random *,int);
		PerlinNoise(int);
		void getRegion(float *,float,float,float,int,int,int,float,float,float);
		void getRegion(float *,int,int,int,int,float,float,float);
		void getValue(float,float);
		void getValue(float,float,float);
		void hashCode(void);
		void init(int);
		void ~PerlinNoise();
		void ~PerlinNoise();
};
