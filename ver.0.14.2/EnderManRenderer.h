#pragma once
class EnderManRenderer{
	public:
		EnderManRenderer(mce::TextureGroup &,GeometryPtr const&,BlockTessellator &);
		void additionalRendering(Model &,Mob &,float,float,float,float,float,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void ~EnderManRenderer();
		void ~EnderManRenderer();
};
