#pragma once
class PlayerRenderer{
	public:
		PlayerRenderer(TextureGroup &,GeometryGroup &,std::unique_ptr<PlayerModel,std::default_delete<PlayerModel>>,float);
		void _getSkinPtr(SkinInfoData &);
		void _updateAlphaTest(SkinInfoData &);
		void getModel(SkinInfoData &);
		void getSkinPtr(Entity &);
		void prepareCarriedItem(Model &,Mob &,ItemInstance *);
		void render(Entity &,Vec3 const&,float,float);
		void renderGui(SkinInfoData &,float,bool);
		void renderLeftHand(Player &,float);
		void renderRightHand(Player &,float);
		void setupPosition(Entity &,Vec3 const&,Matrix &);
		void setupRotations(Entity &,float,float,Matrix &,float);
		void ~PlayerRenderer();
		void ~PlayerRenderer();
};
