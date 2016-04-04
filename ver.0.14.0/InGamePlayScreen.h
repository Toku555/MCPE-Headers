#pragma once
class InGamePlayScreen{
	public:
		InGamePlayScreen(MinecraftClient &);
		void _getThirdPersonSetting(void);
		void _init(int,int);
		void _isHoloViewer(void);
		void _pick(float);
		void _postLevelRender(void);
		void _preLevelRender(void);
		void _prepareCuller(void);
		void _renderFirstPerson3DObjects(float,int);
		void _renderItemInHand(Player &,float);
		void _renderLevel(float);
		void _renderScreenEffect(Player &,float);
		void _renderedFramedItems(Vec3,LevelRenderer *,Entity *,float,ParticleEngine *);
		void _saveMatrices(void);
		void _shouldClipLiquids(void);
		void _updateFreeformPickDirection(float,Vec3 &,Vec3 &);
		void applyInput(float);
		void getNumberOfRenderPasses(void);
		void handleDirection(DirectionId,float,float);
		void isModal(void);
		void isShowingMenu(void);
		void onFocusGained(void);
		void renderGameBehind(void);
		void renderOnlyWhenTopMost(void);
		void setupAndRender(UIRenderContext &,ushort,int,int,float);
		void shouldStealMouse(void);
		void tick(int,int);
		void ~InGamePlayScreen();
		void ~InGamePlayScreen();
};
