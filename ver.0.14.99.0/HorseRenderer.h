#pragma once
class HorseRenderer{
	public:
		HorseRenderer(std::unique_ptr<Model,std::default_delete<Model>>,mce::TextureGroup &,float);
		HorseRenderer(std::unique_ptr<Model,std::default_delete<Model>>,mce::TextureGroup &,float);
		HorseRenderer(std::unique_ptr<Model,std::default_delete<Model>>,std::unique_ptr<Model,std::default_delete<Model>>,mce::TextureGroup &,float);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void scale(Mob &,Matrix &,float);
		void ~HorseRenderer();
		void ~HorseRenderer();
		void ~HorseRenderer();
		void ~HorseRenderer();
};
