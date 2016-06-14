#pragma once
class ThrownEgg{
	public:
		ThrownEgg(BlockSource &);
		ThrownEgg(BlockSource &);
		ThrownEgg(BlockSource &,Vec3 const&);
		ThrownEgg(BlockSource &,Vec3 const&);
		ThrownEgg(Mob &);
		ThrownEgg(Mob &);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void onHit(HitResult const&);
		void onHit(HitResult const&);
		void stopUponGroundCollision(void);
		void stopUponGroundCollision(void);
		void ~ThrownEgg();
		void ~ThrownEgg();
};
