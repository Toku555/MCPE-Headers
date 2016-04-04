#pragma once
class FallingBlockRenderer{
	public:
		FallingBlockRenderer(TextureGroup &,BlockTessellator &);
		void render(Entity &,Vec3 const&,float,float);
		void ~FallingBlockRenderer();
		void ~FallingBlockRenderer();
};
