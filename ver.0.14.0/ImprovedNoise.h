#pragma once
class ImprovedNoise{
	public:
		ImprovedNoise(Random &);
		ImprovedNoise(void);
		void _blendCubeCorners(Vec3 const&,int,int,int,float,float &,float &,float &,float &);
		void _calcValues(float,int &,float &);
		void _getValue(Vec3 const&);
		void _grad(int,Vec3 const&);
		void _grad2(int,float,float);
		void _hashCode(void);
		void _init(Random &);
		void _lerp(float,float,float);
		void _noise(Vec3 const&);
		void _readArea(float *,Vec3 const&,int,int,int,Vec3 const&,float);
};
