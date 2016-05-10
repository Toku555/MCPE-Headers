#pragma once
class Explosion{
	public:
		Explosion(BlockSource &,Entity *,Vec3 const&,float);
		void explode(void);
		void finalizeExplosion(void);
		void getFire(void);
		void getToBlow(void);
		void setFire(bool);
};
