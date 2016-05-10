#pragma once
class InGameRealityTransitionScreen{
	public:
		InGameRealityTransitionScreen(MinecraftClient &);
		void _checkForTransitionToggle(void);
		void _init(int,int);
		void _shouldPushHUD(void);
		void _updateTransition(void);
		void tick(int,int);
		void ~InGameRealityTransitionScreen();
		void ~InGameRealityTransitionScreen();
};
