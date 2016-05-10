#pragma once
class PlaySpaceScreen{
	public:
		PlaySpaceScreen(MinecraftClient &);
		void _doLeaveScreenAction(void);
		void _init(int,int);
		void _renderIconography(void);
		void getScreenName(void);
		void handleBackEvent(bool);
		void handleCommandEvent(VoiceCommand const&);
		void handleGazeGestureInput(short,float,float,float);
		void handlePointerPressed(bool);
		void isHoloviewerPlaced(void);
		void isScreenPlaced(void);
		void isShowingMenu(void);
		void onFocusGained(void);
		void onFocusLost(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void tick(int,int);
		void tick(void);
		void ~PlaySpaceScreen();
		void ~PlaySpaceScreen();
};
