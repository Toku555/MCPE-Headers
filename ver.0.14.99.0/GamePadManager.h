#pragma once
class GamePadManager{
	public:
		void feedButton(int,int,GamePadButtonState);
		void feedButton(int,int,GamePadButtonState);
		void feedStick(int,int,GamePadStickState,float,float);
		void feedStick(int,int,GamePadStickState,float,float);
		void feedTrigger(int,int,float);
		void feedTrigger(int,int,float);
		void getConnectedGamePads(void);
		void getConnectedGamePads(void);
		void getGamePad(int);
		void getGamePad(int);
		void getGamePadsInUse(void);
		void getGamePadsInUse(void);
		void getLastActiveGamePad(void);
		void getLastActiveGamePadId(void);
		void setGamePadConnected(int,bool);
		void setGamePadConnected(int,bool);
		void setGamePadInUse(int);
		void setMaxGamepadButtons(uint);
		void setMaxGamepadButtons(uint);
};
