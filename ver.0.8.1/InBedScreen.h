#pragma once
class InBedScreen{
	public:
		InBedScreen(void);
		void buttonClicked(Button *);
		void handleBackEvent(bool);
		void init(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPositions(void);
		void ~InBedScreen();
		void ~InBedScreen();
};
