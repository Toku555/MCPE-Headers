#pragma once
class ExperiencePotion{
	public:
		ExperiencePotion(BlockSource &);
		ExperiencePotion(BlockSource &,Vec3 const&);
		ExperiencePotion(Mob &);
		void getEntityTypeId(void);
		void getGravity(void);
		void getThrowPower(void);
		void getThrowUpAngleOffset(void);
		void onHit(HitResult const&);
		void ~ExperiencePotion();
		void ~ExperiencePotion();
};
