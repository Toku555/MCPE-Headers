#pragma once
class FrustumData{
	public:
		FrustumData(void);
		void cubeInFrustum(AABB const&);
		void cubeInFrustum(Vec3 const&,Vec3 const&);
		void pointInFrustum(Vec3 const&);
		void setupFrustum(FrustumData::FrustumSide,Vec3 const&,float);
		void sphereInFrustum(Vec3 const&,float);
};
