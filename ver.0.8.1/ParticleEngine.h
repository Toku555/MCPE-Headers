#pragma once
class ParticleEngine{
	public:
		ParticleEngine(Level *,Textures *);
		void _get(ParticleType);
		void _release(Particle *);
		void clear(void);
		void countParticles(void);
		void crack(int,int,int,int);
		void create(ParticleType);
		void destroy(int,int,int);
		void instance(ParticleType,float,float,float,float,float,float,int);
		void render(Entity *,float);
		void setLevel(Level *);
		void tick(void);
		void ~ParticleEngine();
};
