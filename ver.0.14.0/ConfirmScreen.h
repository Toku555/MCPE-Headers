#pragma once
class ConfirmScreen{
	public:
		ConfirmScreen(MinecraftClient &,Screen &,std::string const&,std::string const&,int);
		ConfirmScreen(MinecraftClient &,Screen &,std::string const&,std::string const&,std::string const&,std::string const&,int);
		void _buttonClicked(Button &);
		void _controllerDirectionChanged(int,StickDirection);
		void _postResult(bool);
		void handleBackEvent(bool);
		void init(void);
		void render(int,int,float);
		void setupPositions(void);
		void ~ConfirmScreen();
		void ~ConfirmScreen();
};
