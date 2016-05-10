#pragma once
class InGameRealityModeScreen{
	public:
		InGameRealityModeScreen(MinecraftClient &);
		void _CheckAndUpdateCursor(ScreenContext &);
		void _SetupTransitionForRender(float);
		void _applyDeadbandToJoystickInput(Vec2 &,float);
		void _calculateHoloScreenCullingExtents(Vec3 &,Vec3 &,Vec3 &,Vec3 &,Vec3 &);
		void _checkForTransitionToggle(void);
		void _computeGazeStickRotMatByHead(Matrix &);
		void _drawCutoutFadeout(float);
		void _drawOneToOneCutoutStencil(void);
		void _dropVRAnchor(void);
		void _getInterpolatedFrameFactor(float);
		void _init(int,int);
		void _localPlayerTurned(float);
		void _postLevelRender(ScreenContext &);
		void _preLevelRender(ScreenContext &);
		void _prepareCuller(FrustumData &,FrustumData &);
		void _prepareFrameCuller(FrustumData &,FrustumData &);
		void _prepareVRCuller(FrustumData &,FrustumData &);
		void _updateFreeformPickDirection(float,Vec3 &,Vec3 &);
		void _updateTurnStickRawProcessing(void);
		void getScreenName(void);
		void handleCommandEvent(VoiceCommand const&);
		void handleDirection(DirectionId,float,float);
		void onFocusLost(void);
		void tick(int,int);
		void ~InGameRealityModeScreen();
		void ~InGameRealityModeScreen();
};
