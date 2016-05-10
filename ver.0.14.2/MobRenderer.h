#pragma once
class MobRenderer{
	public:
		MobRenderer(std::unique_ptr<Model,std::default_delete<Model>>,mce::TexturePtr,float);
		void additionalRendering(Model &,Mob &,float,float,float,float,float,float,float);
		void getArmor(void);
		void getAttackAnim(Mob &,float);
		void getBob(Mob &,float);
		void getFlipDegrees(Mob &);
		void getSkinPtr(Entity &);
		void prepareArmor(Mob &,ArmorSlot,float);
		void prepareCarriedItem(Model &,Mob &,ItemInstance *);
		void render(Entity &,Vec3 const&,float,float);
		void renderDebug(Entity &,Options &);
		void renderModel(Model &,mce::TexturePtr const&,Entity &,Vec3 const&,float,float);
		void scale(Mob &,Matrix &,float);
		void setArmor(Model &);
		void setupPosition(Entity &,Vec3 const&,Matrix &);
		void setupRotations(Entity &,float,float,Matrix &,float);
		void ~MobRenderer();
		void ~MobRenderer();
};
