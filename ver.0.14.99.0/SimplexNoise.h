#pragma once
class SimplexNoise{
	public:
		SimplexNoise(Random &);
		SimplexNoise(Random &);
		void _add(float *,Vec3 const&,int,int,int,Vec3 const&,float);
		void _add(float *,Vec3 const&,int,int,int,Vec3 const&,float);
		void _add(float *,float,float,int,int,float,float,float);
		void _add(float *,float,float,int,int,float,float,float);
		void _getValue(Vec2 const&);
		void _getValue(Vec2 const&);
		void _getValue(Vec3 const&);
		void _getValue(Vec3 const&);
};
