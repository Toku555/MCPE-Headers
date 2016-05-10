#pragma once
class TouchMapper{
	public:
		TouchMapper(void);
		void allowPicking(void);
		void clearInputDeviceQueue(void);
		void getInputMode(void);
		void render(InputRenderContext &);
		void setWindowSize(int,int);
		void tick(InputEventQueue &);
		void ~TouchMapper();
		void ~TouchMapper();
};
