#pragma once
class SheepRenderer{
	public:
		SheepRenderer(mce::TextureGroup &,std::unique_ptr<Model,std::default_delete<Model>>,std::unique_ptr<Model,std::default_delete<Model>>,float);
		SheepRenderer(mce::TextureGroup &,std::unique_ptr<Model,std::default_delete<Model>>,std::unique_ptr<Model,std::default_delete<Model>>,float);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void ~SheepRenderer();
		void ~SheepRenderer();
		void ~SheepRenderer();
		void ~SheepRenderer();
};
