#pragma once
class DeathScreen{
	public:
		DeathScreen(MinecraftClient &);
		void _buttonClicked(Button &);
		void _controllerDirectionChanged(int,StickDirection);
		void getScreenName(void);
		void handleButtonPress(short);
		void init(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPositions(void);
		void tick(void);
		void ~DeathScreen();
		void ~DeathScreen();
};
