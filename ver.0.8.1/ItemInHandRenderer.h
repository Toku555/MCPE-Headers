#pragma once
class ItemInHandRenderer{
	public:
		ItemInHandRenderer(Minecraft *);
		void _getFrameID(Mob *,ItemInstance *);
		void itemPlaced(void);
		void itemUsed(void);
		void onAppSuspended(void);
		void rebuildItem(Mob *,ItemInstance &);
		void render(float);
		void renderFire(float);
		void renderItem(Mob *,ItemInstance *);
		void renderScreenEffect(float);
		void renderTex(float,TextureUVCoordinateSet const&);
		void renderWater(float);
		void tick(void);
		void ~ItemInHandRenderer();
		void ~ItemInHandRenderer();
};
