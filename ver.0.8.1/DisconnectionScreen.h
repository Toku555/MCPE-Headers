#pragma once
class DisconnectionScreen{
	public:
		DisconnectionScreen(std::string const&);
		void buttonClicked(Button *);
		void init(void);
		void isInGameScreen(void);
		void render(int,int,float);
		void ~DisconnectionScreen();
		void ~DisconnectionScreen();
};
