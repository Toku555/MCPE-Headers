#pragma once
class ProgressScreen{
	public:
		void function<void ();
		void _buttonClicked(Button &);
		void _isInCancellableState(void);
		void _loadingState(void);
		void exitScreen(void);
		void getProgressMessage(void);
		void handleBackEvent(bool);
		void init(void);
		void isPauseScreen(void);
		void render(int,int,float);
		void renderGameBehind(void);
		void setupPositions(void);
		void ~ProgressScreen();
		void ~ProgressScreen();
};
