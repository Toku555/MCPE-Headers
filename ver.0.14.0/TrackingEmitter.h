#pragma once
class TrackingEmitter{
	public:
		TrackingEmitter(BlockSource &,ParticleType);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void render(Tessellator &,float,float,float,float,float,float);
		void setup(Entity &,ParticleType);
		void ~TrackingEmitter();
		void ~TrackingEmitter();
};
