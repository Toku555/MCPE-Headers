#pragma once
class InGameRealityModeScreen{
	public:
		InGameRealityModeScreen(MinecraftClient &);
		InGameRealityModeScreen(MinecraftClient &);
		InGameRealityModeScreen(MinecraftClient &);
		void _SetupTransitionForRender(float);
		void _SetupTransitionForRender(float);
		void _applyDeadbandToJoystickInput(Vec2 &,float);
		void _calculateHoloScreenCullingExtents(Vec3 &,Vec3 &,Vec3 &,Vec3 &,Vec3 &);
		void _calculateHoloScreenCullingExtents(Vec3 &,Vec3 &,Vec3 &,Vec3 &,Vec3 &);
		void _checkForTransitionToggle(void);
		void _checkForTransitionToggle(void);
		void _computeGazeStickRotMatByHead(Matrix &);
		void _computeGazeStickRotMatByHead(Matrix &);
		void _drawCutoutFadeout(float);
		void _drawCutoutFadeout(float);
		void _drawOneToOneCutoutStencil(void);
		void _drawOneToOneCutoutStencil(void);
		void _dropVRAnchor(void);
		void _dropVRAnchor(void);
		void _getInterpolatedFrameFactor(float);
		void _init(int,int);
		void _init(int,int);
		void _localPlayerTurned(float);
		void _localPlayerTurned(float);
		void _postLevelRender(ScreenContext &);
		void _postLevelRender(ScreenContext &);
		void _preLevelRender(ScreenContext &);
		void _preLevelRender(ScreenContext &);
		void _prepareCuller(FrustumData &,FrustumData &);
		void _prepareCuller(FrustumData &,FrustumData &);
		void _prepareFrameCuller(FrustumData &,FrustumData &);
		void _prepareVRCuller(FrustumData &,FrustumData &);
		void _prepareVRCuller(FrustumData &,FrustumData &);
		void _setHoloMode(void);
		void _setHoloMode(void);
		void _shouldRenderFirstPersonObjects(LevelRenderer &);
		void _shouldRenderFirstPersonObjects(LevelRenderer &);
		void _updateFreeformPickDirection(float,Vec3 &,Vec3 &);
		void _updateFreeformPickDirection(float,Vec3 &,Vec3 &);
		void _updateInGameCursor(void);
		void _updateInGameCursor(void);
		void _updateTurnStickRawProcessing(void);
		void _updateTurnStickRawProcessing(void);
		void getScreenName(void);
		void getScreenName(void);
		void handleCommandEvent(VoiceCommand const&);
		void handleCommandEvent(VoiceCommand const&);
		void handleDirection(DirectionId,float,float);
		void handleDirection(DirectionId,float,float);
		void onFocusLost(void);
		void onFocusLost(void);
		void tick(int,int);
		void tick(int,int);
		void ~InGameRealityModeScreen();
		void ~InGameRealityModeScreen();
		void ~InGameRealityModeScreen();
		void ~InGameRealityModeScreen();
};