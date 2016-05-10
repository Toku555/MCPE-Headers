#pragma once
class ShowSkinPackScreen{
	public:
		ShowSkinPackScreen(MinecraftClient &,SkinPack const&,std::string const&,bool);
		void _controllerDirectionChanged(int,StickDirection);
		void _controllerDirectionHeld(int,StickDirection);
		void _pointerPressed(int,int);
		void _pointerReleased(int,int);
		void getScreenName(void);
		void handleBackEvent(bool);
		void handleButtonRelease(short);
		void handleScrollWheel(float);
		void render(int,int,float);
		void setupPositions(void);
		void tick(void);
		void ~ShowSkinPackScreen();
		void ~ShowSkinPackScreen();
};
