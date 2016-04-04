#pragma once
class PauseScreen{
	public:
		PauseScreen(MinecraftClient &,bool,bool);
		void _changeFocus(void);
		void _controllerDirectionChanged(int,StickDirection);
		void _controllerDirectionHeld(int,StickDirection);
		void _pointerPressed(int,int);
		void _pointerReleased(int,int);
		void _rebuildPlayerList(void);
		void _selectNextPlayer(void);
		void _selectPlayer(int);
		void _selectPreviousPlayer(void);
		void handleBackEvent(bool);
		void handleButtonPress(short);
		void isPauseScreen(void);
		void onEntityAdded(Entity &);
		void onEntityRemoved(Entity &);
		void renderGameBehind(void);
		void setupPositions(void);
		void tick(void);
		void ~PauseScreen();
		void ~PauseScreen();
};
