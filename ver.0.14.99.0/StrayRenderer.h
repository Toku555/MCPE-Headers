#pragma once
class StrayRenderer{
	public:
		StrayRenderer(mce::TextureGroup &,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,float);
		StrayRenderer(mce::TextureGroup &,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,float);
		void prepareArmor(Mob &,ArmorSlot,float);
		void prepareArmor(Mob &,ArmorSlot,float);
		void render(Entity &,Vec3 const&,float,float);
		void render(Entity &,Vec3 const&,float,float);
		void ~StrayRenderer();
		void ~StrayRenderer();
		void ~StrayRenderer();
		void ~StrayRenderer();
};
