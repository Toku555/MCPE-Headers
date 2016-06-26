#pragma once
class MobFlameParticle{
	public:
		void getBrightness(float);
		void init(float,float,float,float,float,float,int);
		void render(Tesselator &,float,float,float,float,float,float);
		void setEntity(Entity *);
		void tick(void);
		void ~MobFlameParticle();
		void ~MobFlameParticle();
};
