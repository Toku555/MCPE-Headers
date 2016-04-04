#pragma once
class PerlinNoise{
	public:
		PerlinNoise(Random &,int,int);
		PerlinNoise(int);
		PerlinNoise(uint,int,int);
		void getRegion(float *,Vec2 const&,int,int,Vec2 const&,float);
		void getRegion(float *,Vec3 const&,int,int,int,Vec3 const&);
		void getValue(Vec3 const&);
		void hashCode(void);
		void ~PerlinNoise();
};
