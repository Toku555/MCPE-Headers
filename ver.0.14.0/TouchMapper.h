#pragma once
class TouchMapper{
	public:
		TouchMapper(void);
		void allowPicking(void);
		void clearInputDeviceQueue(void);
		void getInputMode(void);
		void render(InputRenderContext &);
		void setMapping(InputEventQueue &,BindingFactory const&,ButtonRegistry const&,InputMapping const&);
		void setWindowSize(int,int);
		void tick(InputEventQueue &);
		void ~TouchMapper();
		void ~TouchMapper();
};
