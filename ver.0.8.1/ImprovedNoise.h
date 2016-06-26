#pragma once
class ImprovedNoise{
	public:
		ImprovedNoise(Random *);
		ImprovedNoise(void);
		void add(float *,float,float,float,int,int,int,float,float,float,float);
		void getValue(float,float);
		void getValue(float,float,float);
		void grad(int,float,float,float);
		void grad2(int,float,float);
		void hashCode(void);
		void init(Random *);
		void lerp(float,float,float);
		void noise(float,float,float);
		void ~ImprovedNoise();
		void ~ImprovedNoise();
};
