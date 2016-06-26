#pragma once
class ProgressScreen{
	public:
		ProgressScreen(void);
		void buttonClicked(Button *);
		void exitScreen(void);
		void feedMCOEvent(MCOEvent);
		void handleBackEvent(bool);
		void init(void);
		void isInGameScreen(void);
		void render(int,int,float);
		void setupPositions(void);
		void tick(void);
		void ~ProgressScreen();
		void ~ProgressScreen();
};
