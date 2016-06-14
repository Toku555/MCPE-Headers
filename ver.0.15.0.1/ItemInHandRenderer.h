#pragma once
class ItemInHandRenderer{
	public:
		ItemInHandRenderer(MinecraftClient &,BlockTessellator &);
		ItemInHandRenderer(MinecraftClient &,BlockTessellator &);
		void _getFrameID(Mob *,ItemInstance const&,int);
		void _getRenderCall(Mob *,ItemInstance const&,int);
		void _getRenderCall(Mob *,ItemInstance const&,int);
		void _initMaterials(MinecraftClient &);
		void _initMaterials(MinecraftClient &);
		void _renderLeftHand(PlayerRenderer &,float);
		void _renderLeftHand(PlayerRenderer &,float);
		void _renderMapHands(Player &);
		void _renderMapInHand(Player &,float,float,float);
		void _renderMapInHand(Player &,float,float,float);
		void _renderObject(RenderCall const&,bool);
		void _renderObject(RenderCall const&,bool);
		void _renderRightHand(PlayerRenderer &,float);
		void _renderRightHand(PlayerRenderer &,float);
		void getRenderCallAtFrame(ItemInstance const&,int);
		void getRenderCallAtFrame(ItemInstance const&,int);
		void itemPlaced(void);
		void itemUsed(void);
		void itemUsed(void);
		void onActiveResourcePackChanged(void);
		void onActiveResourcePackChanged(void);
		void onAppSuspended(void);
		void onAppSuspended(void);
		void rebuildItem(Mob *,ItemInstance const&,int);
		void rebuildItem(Mob *,ItemInstance const&,int);
		void render(bool,float);
		void render(bool,float);
		void renderFoil(Entity &,RenderCall *,float);
		void renderItem(Entity &,ItemInstance const&,bool,float);
		void renderItem(Entity &,ItemInstance const&,bool,float);
		void setPlayerBob(LocalPlayer *,float,Matrix &);
		void setPlayerBob(LocalPlayer *,float,Matrix &);
		void tick(void);
		void tick(void);
		void ~ItemInHandRenderer();
		void ~ItemInHandRenderer();
		void ~ItemInHandRenderer();
		void ~ItemInHandRenderer();
};
