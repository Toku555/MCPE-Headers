#pragma once
class SnowGolemRenderer{
	public:
		SnowGolemRenderer(TextureGroup &,GeometryPtr const&,BlockTessellator &);
		void additionalRendering(Model &,Mob &,float,float,float,float,float,float,float);
		void onAppSuspended(void);
		void ~SnowGolemRenderer();
		void ~SnowGolemRenderer();
};
