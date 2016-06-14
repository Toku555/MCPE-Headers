#pragma once
class InGameLivingRoomScreen{
	public:
		InGameLivingRoomScreen(MinecraftClient &);
		InGameLivingRoomScreen(MinecraftClient &);
		void _init(int,int);
		void _init(int,int);
		void _postLevelRender(ScreenContext &);
		void _postLevelRender(ScreenContext &);
		void _preLevelRender(ScreenContext &);
		void _preLevelRender(ScreenContext &);
		void _setHoloMode(void);
		void _setHoloMode(void);
		void _updateFreeformPickDirection(float,Vec3 &,Vec3 &);
		void _updateFreeformPickDirection(float,Vec3 &,Vec3 &);
		void _updateInGameCursor(void);
		void _updateInGameCursor(void);
		void getScreenName(void);
		void getScreenName(void);
		void handleCommandEvent(VoiceCommand const&);
		void handleCommandEvent(VoiceCommand const&);
		void tick(int,int);
		void tick(int,int);
		void ~InGameLivingRoomScreen();
		void ~InGameLivingRoomScreen();
		void ~InGameLivingRoomScreen();
		void ~InGameLivingRoomScreen();
};
