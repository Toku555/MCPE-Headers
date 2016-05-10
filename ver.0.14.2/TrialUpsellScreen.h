#pragma once
class TrialUpsellScreen{
	public:
		TrialUpsellScreen(MinecraftClient &,bool);
		void _controllerDirectionChanged(int,StickDirection);
		void getScreenName(void);
		void handleBackEvent(bool);
		void init(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPositions(void);
		void tick(void);
		void ~TrialUpsellScreen();
		void ~TrialUpsellScreen();
};
