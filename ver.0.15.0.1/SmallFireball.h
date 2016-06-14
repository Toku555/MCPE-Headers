#pragma once
class SmallFireball{
	public:
		SmallFireball(BlockSource &);
		SmallFireball(BlockSource &);
		SmallFireball(BlockSource &,Vec3 const&,Vec3 const&);
		SmallFireball(BlockSource &,Vec3 const&,Vec3 const&);
		SmallFireball(Mob &,Vec3 const&);
		SmallFireball(Mob &,Vec3 const&);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void hurt(EntityDamageSource const&,int);
		void hurt(EntityDamageSource const&,int);
		void isPickable(void);
		void isPickable(void);
		void onHit(HitResult const&);
		void onHit(HitResult const&);
		void ~SmallFireball();
		void ~SmallFireball();
};
