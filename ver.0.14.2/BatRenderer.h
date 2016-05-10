#pragma once
class BatRenderer{
	public:
		BatRenderer(mce::TextureGroup &,GeometryPtr const&);
		void scale(Mob &,Matrix &,float);
		void setupRotations(Entity &,float,float,Matrix &,float);
		void ~BatRenderer();
		void ~BatRenderer();
};
