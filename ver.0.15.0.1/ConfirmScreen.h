#pragma once
class ConfirmScreen{
	public:
		ConfirmScreen(MinecraftClient &,Screen &,std::string const&,std::string const&,int);
		ConfirmScreen(MinecraftClient &,Screen &,std::string const&,std::string const&,std::string const&,std::string const&,int);
		ConfirmScreen(MinecraftClient &,Screen &,std::string const&,std::string const&,std::string const&,std::string const&,int);
		void _buttonClicked(Button &);
		void _buttonClicked(Button &);
		void _controllerDirectionChanged(int,StickDirection);
		void _controllerDirectionChanged(int,StickDirection);
		void _postResult(bool);
		void _postResult(bool);
		void getScreenName(void);
		void getScreenName(void);
		void handleBackEvent(bool);
		void handleBackEvent(bool);
		void init(void);
		void init(void);
		void render(int,int,float);
		void render(int,int,float);
		void setupPositions(void);
		void setupPositions(void);
		void ~ConfirmScreen();
		void ~ConfirmScreen();
		void ~ConfirmScreen();
		void ~ConfirmScreen();
};
