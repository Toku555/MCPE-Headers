#pragma once
class InGameLivingRoomScreen{
	public:
		InGameLivingRoomScreen(MinecraftClient &);
		void _init(int,int);
		void _postLevelRender(ScreenContext &);
		void _preLevelRender(ScreenContext &);
		void _prepareInGameCursor(void);
		void _updateFreeformPickDirection(float,Vec3 &,Vec3 &);
		void handleCommandEvent(VoiceCommand const&);
		void tick(int,int);
		void ~InGameLivingRoomScreen();
		void ~InGameLivingRoomScreen();
};
