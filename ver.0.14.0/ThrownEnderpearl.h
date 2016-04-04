#pragma once
class ThrownEnderpearl{
	public:
		ThrownEnderpearl(BlockSource &);
		ThrownEnderpearl(BlockSource &,Vec3 const&);
		ThrownEnderpearl(Mob &);
		void getEntityTypeId(void);
		void onHit(HitResult const&);
		void ~ThrownEnderpearl();
		void ~ThrownEnderpearl();
};
