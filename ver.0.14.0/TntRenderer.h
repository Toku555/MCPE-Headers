#pragma once
class TntRenderer{
	public:
		TntRenderer(TextureGroup &,BlockTessellator &);
		void render(Entity &,Vec3 const&,float,float);
		void ~TntRenderer();
		void ~TntRenderer();
};
