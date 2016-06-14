#pragma once
class SpiderRenderer{
	public:
		SpiderRenderer(std::unique_ptr<SpiderModel,std::default_delete<SpiderModel>>,mce::TextureGroup &);
		SpiderRenderer(std::unique_ptr<SpiderModel,std::default_delete<SpiderModel>>,mce::TextureGroup &);
		void getFlipDegrees(Mob &);
		void getFlipDegrees(Mob &);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void scale(Mob &,Matrix &,float);
		void ~SpiderRenderer();
		void ~SpiderRenderer();
		void ~SpiderRenderer();
		void ~SpiderRenderer();
};
