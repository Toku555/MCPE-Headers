#pragma once
class GhastRenderer{
	public:
		GhastRenderer(mce::TextureGroup &);
		GhastRenderer(mce::TextureGroup &);
		GhastRenderer(mce::TextureGroup &,std::unique_ptr<Model,std::default_delete<Model>>);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void scale(Mob &,Matrix &,float);
		void ~GhastRenderer();
		void ~GhastRenderer();
		void ~GhastRenderer();
		void ~GhastRenderer();
};
