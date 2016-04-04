#pragma once
class ThrownEgg{
	public:
		ThrownEgg(BlockSource &);
		ThrownEgg(BlockSource &,Vec3 const&);
		ThrownEgg(Mob &);
		void getEntityTypeId(void);
		void onHit(HitResult const&);
		void stopUponGroundCollision(void);
		void ~ThrownEgg();
		void ~ThrownEgg();
};
