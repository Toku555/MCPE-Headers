#pragma once
class FlameParticle{
	public:
		void getBrightness(float);
		void init(float,float,float,float,float,float,int);
		void render(Tesselator &,float,float,float,float,float,float);
		void tick(void);
		void ~FlameParticle();
		void ~FlameParticle();
};
