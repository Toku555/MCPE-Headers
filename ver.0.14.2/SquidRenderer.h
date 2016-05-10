#pragma once
class SquidRenderer{
	public:
		SquidRenderer(mce::TextureGroup &,GeometryPtr const&,float);
		void getBob(Mob &,float);
		void render(Entity &,Vec3 const&,float,float);
		void setupRotations(Entity &,float,float,Matrix &,float);
		void ~SquidRenderer();
		void ~SquidRenderer();
};
