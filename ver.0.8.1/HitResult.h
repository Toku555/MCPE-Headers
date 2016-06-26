#pragma once
class HitResult{
	public:
		HitResult(Entity *);
		HitResult(HitResult const&);
		HitResult(int,int,int,int,Vec3 const&);
		HitResult(void);
		void distanceTo(Entity *);
};
