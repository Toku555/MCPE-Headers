#pragma once
namespace GameControllerHandler{
	class Android{
		public:
		GameControllerHandler_Android(void);
		GameControllerHandler_Android(void);
		void _getGamePadId(int);
		void _isDeviceRegistered(int);
		void _registerDevice(int);
		void _registerDevice(int);
		void controllerMove(int,int,float,float);
		void controllerRelease(int,int,float,float);
		void controllerTouch(int,int,float,float);
		void convertAndroidKeyCodeToGamePadButtonId(int);
		void feedDpad(int);
		void feedDpad(int);
		void handleDeviceConnected(int);
		void handleDeviceConnected(int);
		void handleDeviceDisconnected(int);
		void handleDeviceDisconnected(int);
		void normalizeAxesWithDeadzone(float &,float &,float);
		void normalizeAxisWithDeadzone(float,float);
		void processDpadInput(int,AInputEvent *);
		void processInput(android_app *,AInputEvent *,bool);
		void processInput(android_app *,AInputEvent *,bool);
		void processKeyInput(int,AInputEvent *);
		void processKeyInput(int,AInputEvent *);
		void processLeftStickInput(int,AInputEvent *);
		void processLeftStickInput(int,AInputEvent *);
		void processLeftTrigger(int,AInputEvent *);
		void processLeftTrigger(int,AInputEvent *);
		void processMotionInput(int,AInputEvent *);
		void processRightStickInput(int,AInputEvent *);
		void processRightStickInput(int,AInputEvent *);
		void processRightTrigger(int,AInputEvent *);
		void processRightTrigger(int,AInputEvent *);
		void processSwipeInput(int,AInputEvent *);
		void processSwipeInput(int,AInputEvent *);
		void ~GameControllerHandler_Android();
	}
};
