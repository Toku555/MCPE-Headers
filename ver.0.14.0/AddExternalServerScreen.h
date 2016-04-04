#pragma once
class AddExternalServerScreen{
	public:
		AddExternalServerScreen(MinecraftClient &);
		void _buttonClicked(Button &);
		void _controllerDirectionChanged(int,StickDirection);
		void _guiElementClicked(GuiElement &);
		void checkIPStringValidity(std::string const&);
		void closeScreen(void);
		void handleBackEvent(bool);
		void handleButtonRelease(short);
		void handleCaretLocation(int);
		void init(void);
		void render(int,int,float);
		void setupPositions(void);
		void ~AddExternalServerScreen();
		void ~AddExternalServerScreen();
};
