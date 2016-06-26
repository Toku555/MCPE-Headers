#pragma once
class MinecartRenderer{
	public:
		MinecartRenderer(void);
		void render(Entity *,float,float,float,float,float);
		void renderMinecartContents(Entity *,float,Tile *,int);
		void ~MinecartRenderer();
		void ~MinecartRenderer();
};
