#pragma once
class MessageBoxScreen{
	public:
		MessageBoxScreen(MinecraftClient &,std::string const&);
		void _buttonClicked(Button &);
		void handleBackEvent(bool);
		void init(void);
		void render(int,int,float);
		void ~MessageBoxScreen();
		void ~MessageBoxScreen();
};
