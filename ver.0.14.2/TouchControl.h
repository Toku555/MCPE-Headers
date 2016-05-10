#pragma once
class TouchControl{
	public:
		void release(InputEventQueue &);
		void render(InputRenderContext &);
		void setWindowSize(int,int);
		void tick(InputEventQueue &,TouchPointResults &,int);
		void ~TouchControl();
		void ~TouchControl();
};
