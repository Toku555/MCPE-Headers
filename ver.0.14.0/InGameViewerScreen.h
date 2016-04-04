#pragma once
class InGameViewerScreen{
	public:
		InGameViewerScreen(MinecraftClient &);
		void _disableFollowPlayer(void);
		void _drawDebugStabilizationPlane(void);
		void _drawHoloViewerCursor(void);
		void _drawHolographicGraphicalElements(void);
		void _getFollowPlayerId(void);
		void _getLSROffsetForViewscreen(void);
		void _init(int,int);
		void _isFollowingPlayer(void);
		void _isHoloViewer(void);
		void _nextFollowPlayerId(void);
		void _postLevelRender(void);
		void _prepareCuller(void);
		void _renderLSRPlane(void);
		void _setAdvanceTimeToNext(int);
		void _setCorrectViewProj(void);
		void _setDesiredHoloviewerCenter(Vec3 const&,float);
		void _setFollowPlayer(void);
		void _setFollowPlayerId(EntityUniqueID const&);
		void _setupHolographicStabilizationPlane(void);
		void _updateFreeformPickDirection(float,Vec3 &,Vec3 &);
		void handleCommandEvent(VoiceCommand const&);
		void handleGazeGestureInput(short,float,float,float);
		void isWorldViewer(void);
		void onFocusGained(void);
		void onFocusLost(void);
		void tick(int,int);
		void ~InGameViewerScreen();
		void ~InGameViewerScreen();
};
