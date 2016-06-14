#pragma once
class Cube{
	public:
		Cube(Vec3 const&,Vec3 const&,float,bool,Vec2 const&,TextureOffset const&);
		Cube(Vec3 const&,Vec3 const&,float,bool,Vec2 const&,TextureOffset const&);
		Cube(void);
		void compile(Tessellator &,float);
		void compile(Tessellator &,float);
		void expandAABB(AABB &);
		void expandAABB(AABB &);
};
