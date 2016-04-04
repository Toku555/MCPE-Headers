#pragma once
class InGameRealityModeScreen{
	public:
		InGameRealityModeScreen(MinecraftClient &);
		void _calculateHoloScreenCullingExtents(Vec3 &,Vec3 &,Vec3 &,Vec3 &,Vec3 &);
		void _drawHoloRealityModeCursor(void);
		void _drawOneToOneCutoutStencil(void);
		void _dropVRAnchor(void);
		void _init(int,int);
		void _postLevelRender(void);
		void _preLevelRender(void);
		void _prepareCuller(void);
		void _prepareFrameCuller(void);
		void _prepareVRCuller(void);
		void _setCorrectViewProj(void);
		void _updateFreeformPickDirection(float,Vec3 &,Vec3 &);
		void _updateTransition(void);
		void handleCommandEvent(VoiceCommand const&);
		void handleDirection(DirectionId,float,float);
		void onFocusGained(void);
		void onFocusLost(void);
		void ~InGameRealityModeScreen();
		void ~InGameRealityModeScreen();
};
