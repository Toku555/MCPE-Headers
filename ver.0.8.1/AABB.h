#pragma once
class AABB{
	public:
		void clip(Vec3 const&,Vec3 const&);
		void clipXCollide(AABB const&,float);
		void clipYCollide(AABB const&,float);
		void clipZCollide(AABB const&,float);
		void expand(float,float,float);
		void merge(AABB const&);
		void move(float,float,float);
};
