#pragma once
class Vec3{
	public:
		Vec3(float,float,float);
		void clipX(Vec3 const&,float,Vec3&);
		void clipY(Vec3 const&,float,Vec3&);
		void clipZ(Vec3 const&,float,Vec3&);
		void distanceTo(Vec3 const&);
		void distanceToSqr(Vec3 const&);
		void normalized(void);
		void xRot(float);
		void yRot(float);
};
