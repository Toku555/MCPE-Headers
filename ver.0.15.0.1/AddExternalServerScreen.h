#pragma once
class AddExternalServerScreen{
	public:
		AddExternalServerScreen(MinecraftClient &);
		AddExternalServerScreen(MinecraftClient &);
		void _buttonClicked(Button &);
		void _buttonClicked(Button &);
		void _controllerDirectionChanged(int,StickDirection);
		void _controllerDirectionChanged(int,StickDirection);
		void _guiElementClicked(GuiElement &);
		void _guiElementClicked(GuiElement &);
		void checkIPStringValidity(std::string const&);
		void checkIPStringValidity(std::string const&);
		void closeScreen(void);
		void getScreenName(void);
		void getScreenName(void);
		void handleBackEvent(bool);
		void handleBackEvent(bool);
		void handleButtonRelease(short);
		void handleButtonRelease(short);
		void handleCaretLocation(int);
		void handleCaretLocation(int);
		void init(void);
		void init(void);
		void render(int,int,float);
		void render(int,int,float);
		void setupPositions(void);
		void setupPositions(void);
		void ~AddExternalServerScreen();
		void ~AddExternalServerScreen();
		void ~AddExternalServerScreen();
		void ~AddExternalServerScreen();
};
