#pragma once
class HumanoidMobRenderer{
	public:
		HumanoidMobRenderer(std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,mce::TexturePtr,float);
		HumanoidMobRenderer(std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,std::unique_ptr<HumanoidModel,std::default_delete<HumanoidModel>>,mce::TexturePtr,float);
		void additionalRendering(Model &,Mob &,float,float,float,float,float,float,float);
		void getModel(Mob &);
		void initTextures(void);
		void prepareArmor(Mob &,ArmorSlot,float);
		void prepareCarriedItem(Model &,Mob &,ItemInstance *);
		void render(Entity &,Vec3 const&,float,float);
		void renderInternal(HumanoidModel &,Entity &,Vec3 const&,float,float);
		void ~HumanoidMobRenderer();
		void ~HumanoidMobRenderer();
};
