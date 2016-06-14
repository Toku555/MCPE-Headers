#pragma once
namespace j{
	class GamePad{
		public:
		void _feedButton(int,GamePadButtonState);
		void _feedStick(int,GamePadStickState,float,float);
		void _feedTrigger(int,float);
		void _setConnected(bool);
	}
};
