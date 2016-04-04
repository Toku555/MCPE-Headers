#pragma once
class MinecartRenderer{
	public:
		MinecartRenderer(TextureGroup &,BlockTessellator &);
		void render(Entity &,Vec3 const&,float,float);
		void renderDebug(Entity &,Options &);
		void renderMinecartContents(Entity &,float,Block *,int);
		void ~MinecartRenderer();
		void ~MinecartRenderer();
};
