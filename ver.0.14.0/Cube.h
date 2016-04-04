#pragma once
class Cube{
	public:
		Cube(Vec3 const&,Vec3 const&,float,bool,Vec2 const&,TextureOffset const&);
		Cube(void);
		void compile(Tessellator &,float);
		void expandAABB(AABB &);
};
