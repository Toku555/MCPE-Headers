#pragma once
class SelectSkinTypeScreen{
	public:
		SelectSkinTypeScreen(MinecraftClient &,bool,bool,std::string const&);
		void _buttonClicked(Button &);
		void _pointerPressed(int,int);
		void _pointerReleased(int,int);
		void handleBackEvent(bool);
		void init(void);
		void render(int,int,float);
		void setupPositions(void);
		void ~SelectSkinTypeScreen();
		void ~SelectSkinTypeScreen();
};
