#pragma once
class InGamePlayHoloScreen{
	public:
		InGamePlayHoloScreen(MinecraftClient &);
		void _drawDebugStabilizationPlane(void);
		void _drawHolographicGraphicalElements(void);
		void _drawStereoscopicQuad(void);
		void _init(int,int);
		void _postLevelRender(ScreenContext &);
		void _renderLSRPlane(void);
		void _setStereoModeParams(void);
		void _setupHolographicStabilizationPlane(void);
		void getScreenName(void);
		void handleCommandEvent(VoiceCommand const&);
		void onFocusGained(void);
		void onFocusLost(void);
		void ~InGamePlayHoloScreen();
		void ~InGamePlayHoloScreen();
};