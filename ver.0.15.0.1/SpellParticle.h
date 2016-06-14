#pragma once
class SpellParticle{
	public:
		SpellParticle(BlockSource &,ParticleType);
		SpellParticle(BlockSource &,ParticleType);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void normalTick(void);
		void ~SpellParticle();
		void ~SpellParticle();
};
