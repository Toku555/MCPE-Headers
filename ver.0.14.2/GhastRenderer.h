#pragma once
class GhastRenderer{
	public:
		GhastRenderer(mce::TextureGroup &);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void ~GhastRenderer();
		void ~GhastRenderer();
};
