#pragma once
class StartMenuScreen{
	public:
		StartMenuScreen(void);
		void _updateLicense(void);
		void buttonClicked(Button *);
		void handleBackEvent(bool);
		void init(void);
		void isInGameScreen(void);
		void render(int,int,float);
		void setupPositions(void);
		void tick(void);
		void ~StartMenuScreen();
		void ~StartMenuScreen();
};
