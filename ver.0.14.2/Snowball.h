#pragma once
class Snowball{
	public:
		Snowball(BlockSource &);
		Snowball(BlockSource &,Vec3 const&);
		Snowball(Mob &);
		void getEntityTypeId(void);
		void getParticleType(void);
		void onHit(HitResult const&);
		void ~Snowball();
		void ~Snowball();
};
