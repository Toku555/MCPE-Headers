#pragma once
class BatRenderer{
	public:
		BatRenderer(TextureGroup &,GeometryPtr const&);
		void scale(Mob &,Matrix &,float);
		void setupRotations(Entity &,float,float,Matrix &,float);
		void ~BatRenderer();
		void ~BatRenderer();
};
