#pragma once
class TntRenderer{
	public:
		TntRenderer(mce::TextureGroup &,BlockTessellator &);
		TntRenderer(mce::TextureGroup &,BlockTessellator &);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void ~TntRenderer();
		void ~TntRenderer();
};
