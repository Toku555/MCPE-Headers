#pragma once
class MinecartRenderer{
	public:
		MinecartRenderer(mce::TextureGroup &,BlockTessellator &);
		MinecartRenderer(mce::TextureGroup &,BlockTessellator &);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void renderDebug(Entity &,Options &);
		void renderDebug(Entity &,Options &);
		void renderMinecartContents(Entity &,float,Block *,int);
		void renderMinecartContents(Entity &,float,Block *,int);
		void ~MinecartRenderer();
		void ~MinecartRenderer();
		void ~MinecartRenderer();
		void ~MinecartRenderer();
};
