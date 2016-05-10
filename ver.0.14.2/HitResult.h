#pragma once
class HitResult{
	public:
		HitResult(BlockPos const&,signed char,Vec3 const&);
		HitResult(Entity &);
		HitResult(Entity &,Vec3 const&);
		HitResult(HitResult const&);
		HitResult(Vec3 const&);
		HitResult(void);
		void distanceTo(Entity const&);
		void setOutOfRange(void);
};
