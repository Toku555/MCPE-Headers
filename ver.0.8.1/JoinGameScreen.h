#pragma once
class JoinGameScreen{
	public:
		JoinGameScreen(void);
		void buttonClicked(Button *);
		void handleBackEvent(bool);
		void init(void);
		void isInGameScreen(void);
		void isIndexValid(int);
		void render(int,int,float);
		void setupPositions(void);
		void tick(void);
		void ~JoinGameScreen();
		void ~JoinGameScreen();
};
