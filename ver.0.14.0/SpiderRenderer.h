#pragma once
class SpiderRenderer{
	public:
		SpiderRenderer(std::unique_ptr<SpiderModel,std::default_delete<SpiderModel>>,TextureGroup &);
		void getFlipDegrees(Mob &);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void ~SpiderRenderer();
		void ~SpiderRenderer();
};
