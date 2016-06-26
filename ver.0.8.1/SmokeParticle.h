#pragma once
class SmokeParticle{
	public:
		void init(float,float,float,float,float,float,int);
		void render(Tesselator &,float,float,float,float,float,float);
		void tick(void);
		void ~SmokeParticle();
		void ~SmokeParticle();
};
