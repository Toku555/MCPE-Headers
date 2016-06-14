#pragma once
namespace j{
	class GameControllerHandler{
		public:
		void _registerDevice(int);
		void feedDpad(int);
		void handleDeviceConnected(int);
		void handleDeviceDisconnected(int);
		void processInput(android_app *,AInputEvent *,bool);
		void processKeyInput(int,AInputEvent *);
	}
};
