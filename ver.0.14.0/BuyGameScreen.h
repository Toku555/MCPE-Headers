#pragma once
class BuyGameScreen{
	public:
		BuyGameScreen(MinecraftClient &);
		void _buttonClicked(Button &);
		void init(void);
		void render(int,int,float);
		void ~BuyGameScreen();
		void ~BuyGameScreen();
};
