#pragma once
class DeathScreen{
	public:
		DeathScreen(void);
		void buttonClicked(Button *);
		void init(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPositions(void);
		void tick(void);
		void ~DeathScreen();
		void ~DeathScreen();
};
