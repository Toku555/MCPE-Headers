#pragma once
class IronGolemRenderer{
	public:
		IronGolemRenderer(TextureGroup &,GeometryPtr const&,BlockTessellator &);
		void additionalRendering(Model &,Mob &,float,float,float,float,float,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void setupRotations(Entity &,float,float,Matrix &,float);
		void ~IronGolemRenderer();
		void ~IronGolemRenderer();
};
