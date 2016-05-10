#pragma once
class TestAutoInputMapper{
	public:
		void clearInputDeviceQueue(void);
		void getCursorPos(float &,float &);
		void getInputMode(void);
		void tick(InputEventQueue &);
		void ~TestAutoInputMapper();
		void ~TestAutoInputMapper();
};
