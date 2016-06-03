#pragma once
class FullScreenEffectRenderer{
	public:
		FullScreenEffectRenderer(mce::TextureGroup &);
		FullScreenEffectRenderer(mce::TextureGroup &);
		void _createCubeFor(FullBlock,bool);
		void _createCubeFor(FullBlock,bool);
		void _getColor(LevelRenderer &,BlockSource &,FullBlock,Vec3 const&);
		void _getColor(LevelRenderer &,BlockSource &,FullBlock,Vec3 const&);
		void _getCubeFor(FullBlock,bool);
		void _getCubeFor(FullBlock,bool);
		void _getFaceMesh(void);
		void _getFaceMesh(void);
		void _getMaterialFor(FullBlock);
		void _renderPortalOverlay(float,mce::TexturePtr &);
		void _renderSleepOverlay(Player const&);
		void _renderSleepOverlay(Player const&);
		void _renderTex(FullBlock,mce::TexturePtr const&,Color const&);
		void onAppSuspended(void);
		void onAppSuspended(void);
		void onLowMemory(void);
		void onLowMemory(void);
		void render(LevelRenderer &,LocalPlayer const&,float);
		void render(LevelRenderer &,LocalPlayer const&,float);
		void renderHeadlocked(Player const&,float);
		void renderHeadlocked(Player const&,float);
		void ~FullScreenEffectRenderer();
		void ~FullScreenEffectRenderer();
		void ~FullScreenEffectRenderer();
		void ~FullScreenEffectRenderer();
};
