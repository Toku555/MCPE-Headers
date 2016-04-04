#pragma once
class GamePad{
	public:
		GamePad(void);
		void _clearInput(void);
		void _feedButton(int,GamePadButtonState);
		void _feedStick(int,GamePadStickState,float,float);
		void _feedTrigger(int,float);
		void _setConnected(bool);
		void _setUsed(bool);
		void getNextEvent(void);
		void isConnected(void);
		void isInUse(void);
		void next(void);
};
