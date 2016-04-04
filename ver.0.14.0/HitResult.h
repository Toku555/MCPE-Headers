#pragma once
class HitResult{
	public:
		HitResult(BlockPos const&,signed char,Vec3 const&);
		HitResult(Entity &);
		HitResult(HitResult const&);
		HitResult(void);
		void distanceTo(Entity const&);
};
