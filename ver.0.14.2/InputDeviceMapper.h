#pragma once
class InputDeviceMapper{
	public:
		InputDeviceMapper(void);
		void clearInputDeviceQueue(void);
		void getCursorPos(float &,float &);
		void render(InputRenderContext &);
		void setWindowSize(int,int);
		void ~InputDeviceMapper();
		void ~InputDeviceMapper();
};
