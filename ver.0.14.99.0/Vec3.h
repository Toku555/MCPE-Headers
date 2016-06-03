#pragma once
class Vec3{
	public:
		Vec3(BlockPos const&);
		Vec3(BlockPos const&);
		Vec3(Pos const&);
		Vec3(Pos const&);
		void clamp(Vec3 const&,Vec3 const&,Vec3 const&);
		void clampAlongNormal(Vec3 const&,Vec3 const&,Vec3 const&,Vec3 const&,Vec3&);
		void clampAlongNormal(Vec3 const&,Vec3 const&,Vec3 const&,Vec3 const&,Vec3&);
		void directionFromRotation(Vec2 const&);
		void directionFromRotation(Vec2 const&);
		void directionFromRotation(float,float);
		void maxComponent(void);
		void minComponent(void);
		void rotationFromDirection(Vec3 const&);
		void rotationFromDirection(Vec3 const&);
		void rotationFromPoints(Vec3 const&,Vec3 const&);
		void toString(void);
		void xz(void);
		void xz(void);
};
