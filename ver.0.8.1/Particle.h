#pragma once
class Particle{
	public:
		Particle(Level *,ParticleType,std::string const&);
		void _init(float,float,float,float,float,float,int);
		void addAdditonalSaveData(CompoundTag *);
		void getEntityTypeId(void);
		void readAdditionalSaveData(CompoundTag *);
		void render(Tesselator &,float,float,float,float,float,float);
		void scale(float);
		void setEntity(Entity *);
		void setPower(float);
		void tick(void);
		void ~Particle();
		void ~Particle();
};
