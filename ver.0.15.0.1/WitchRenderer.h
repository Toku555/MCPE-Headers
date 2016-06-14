#pragma once
class WitchRenderer{
	public:
		WitchRenderer(std::unique_ptr<Model,std::default_delete<Model>>,mce::TexturePtr);
		WitchRenderer(std::unique_ptr<Model,std::default_delete<Model>>,mce::TexturePtr);
		void additionalRendering(Model &,Mob &,float,float,float,float,float,float,float);
		void additionalRendering(Model &,Mob &,float,float,float,float,float,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void scale(Mob &,Matrix &,float);
		void ~WitchRenderer();
		void ~WitchRenderer();
};
