#pragma once
class FullScreenEffectRenderer{
	public:
		FullScreenEffectRenderer(mce::TextureGroup &);
		void _createCubeFor(FullBlock,bool);
		void _getCubeFor(FullBlock,bool);
		void _getFaceMesh(void);
		void _renderPortalOverlay(float,mce::TexturePtr &);
		void _renderSleepOverlay(Player const&);
		void _renderTex(Entity const&,FullBlock,mce::TexturePtr const&);
		void onAppSuspended(void);
		void onLowMemory(void);
		void render(LocalPlayer const&,Vec3 const&,float);
		void renderHeadlocked(Player const&,float);
		void ~FullScreenEffectRenderer();
		void ~FullScreenEffectRenderer();
};
