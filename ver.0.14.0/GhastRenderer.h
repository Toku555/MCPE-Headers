#pragma once
class GhastRenderer{
	public:
		GhastRenderer(TextureGroup &);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void ~GhastRenderer();
		void ~GhastRenderer();
};
