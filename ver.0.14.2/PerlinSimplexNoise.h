#pragma once
class PerlinSimplexNoise{
	public:
		PerlinSimplexNoise(Random &,int);
		PerlinSimplexNoise(uint,int);
		void _init(Random &);
		void getRegion(float *,Vec2 const&,int,int,Vec2 const&,float,float);
		void getRegion(float *,Vec3 const&,int,int,int,Vec3 const&);
		void getValue(Vec3 const&);
		void getValue(float,float);
		void ~PerlinSimplexNoise();
};
