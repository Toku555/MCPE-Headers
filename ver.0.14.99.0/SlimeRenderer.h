#pragma once
class SlimeRenderer{
	public:
		SlimeRenderer(mce::TextureGroup &);
		SlimeRenderer(mce::TextureGroup &);
		SlimeRenderer(mce::TextureGroup &,std::unique_ptr<SlimeModel,std::default_delete<SlimeModel>>,std::unique_ptr<SlimeModel,std::default_delete<SlimeModel>>);
		void prepareArmor(Mob &,ArmorSlot,float);
		void prepareArmor(Mob &,ArmorSlot,float);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void scale(Mob &,Matrix &,float);
		void ~SlimeRenderer();
		void ~SlimeRenderer();
		void ~SlimeRenderer();
		void ~SlimeRenderer();
};
