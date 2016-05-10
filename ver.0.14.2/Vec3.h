#pragma once
class Vec3{
	public:
		Vec3(BlockPos const&);
		Vec3(Pos const&);
		void clamp(Vec3 const&,Vec3 const&,Vec3 const&);
		void clampAlongNormal(Vec3 const&,Vec3 const&,Vec3 const&,Vec3 const&,Vec3&);
		void directionFromRotation(Vec2 const&);
		void directionFromRotation(float,float);
		void length(void);
		void maxComponent(void);
		void minComponent(void);
		void rotationFromDirection(Vec3 const&);
		void rotationFromPoints(Vec3 const&,Vec3 const&);
		void toString(void);
		void xz(void);
};
