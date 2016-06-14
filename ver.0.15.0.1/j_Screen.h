#pragma once
namespace j{
	class Screen{
		public:
		void _controllerDirectionHeld(int,StickDirection);
		void _init(int,int);
		void _pointerPressed(int,int);
		void _pointerReleased(int,int);
		void _processControllerDirection(int);
		void handleButtonPress(short);
		void handleTextChar(std::string const&,bool);
		void onFocusGained(void);
		void onFocusLost(void);
		void renderGameBehind(void);
		void tick(void);
		void ~Screen();
	}
};
