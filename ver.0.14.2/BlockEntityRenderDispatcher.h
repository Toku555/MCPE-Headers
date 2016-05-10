#pragma once
class BlockEntityRenderDispatcher{
	public:
		BlockEntityRenderDispatcher(void);
		void destroyInstance(void);
		void getInstance(void);
		void getPlayerPosition(void);
		void getRenderer(BlockEntity &);
		void getRenderer(BlockEntityRendererId);
		void init(MinecraftClient &,Level &,mce::TextureGroup &,Font &);
		void render(BlockEntity &,Vec3 const&,float,mce::MaterialPtr const&,mce::TexturePtr const&,int);
		void render(BlockEntity &,float,mce::MaterialPtr const&,mce::TexturePtr const&,int);
		void setCameraTargetPos(Vec3);
		void ~BlockEntityRenderDispatcher();
};
