#pragma once
class MobEffectsScreen{
	public:
		MobEffectsScreen(MinecraftClient &);
		void _buttonClicked(Button &);
		void _closeWindow(void);
		void _controllerDirectionChanged(int,StickDirection);
		void _pointerReleased(int,int);
		void getScreenName(void);
		void handleBackEvent(bool);
		void handleButtonPress(short);
		void init(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPositions(void);
		void tick(void);
		void ~MobEffectsScreen();
		void ~MobEffectsScreen();
};
