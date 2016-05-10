#pragma once
class DisconnectionScreen{
	public:
		DisconnectionScreen(MinecraftClient &,std::string const&);
		void _buttonClicked(Button &);
		void getScreenName(void);
		void handleBackEvent(bool);
		void init(void);
		void render(int,int,float);
		void ~DisconnectionScreen();
		void ~DisconnectionScreen();
};
