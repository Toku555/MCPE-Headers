#pragma once
class KeyboardLayoutScreen{
	public:
		KeyboardLayoutScreen(MinecraftClient &,bool);
		void _buttonClicked(Button &);
		void _controllerDirectionChanged(int,StickDirection);
		void _getClickedLayout(int,int);
		void _getLayoutString(int);
		void _pointerPressed(int,int);
		void _pointerReleased(int,int);
		void handleBackEvent(bool);
		void handleButtonRelease(short);
		void handleScrollWheel(float);
		void init(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPositions(void);
		void tick(void);
		void ~KeyboardLayoutScreen();
		void ~KeyboardLayoutScreen();
};
