#pragma once
class ItemInHandRenderer{
	public:
		void _getFrameID(Mob *,ItemInstance const&,int);
		void _initMaterials(MinecraftClient &);
		void _renderLeftHand(PlayerRenderer &,float);
		void _renderMapHands(Player &);
		void _renderMapInHand(Player &,float,float,float);
		void _renderObject(RenderCall const&,bool);
		void _renderRightHand(PlayerRenderer &,float);
		void getRenderCallAtFrame(ItemInstance const&,int);
		void itemPlaced(void);
		void itemUsed(void);
		void onAppSuspended(void);
		void rebuildItem(Mob *,ItemInstance const&,int);
		void render(float);
		void renderFire(float);
		void renderFoil(Entity &,RenderCall *,float);
		void renderItem(Entity &,ItemInstance const&,float);
		void renderScreenEffect(Player &,float);
		void renderTex(float,TextureUVCoordinateSet const&,mce::TexturePtr const&);
		void setPlayerBob(LocalPlayer *,float,Matrix &);
		void tick(void);
		void ~ItemInHandRenderer();
		void ~ItemInHandRenderer();
};
