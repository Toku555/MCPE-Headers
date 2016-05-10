#pragma once
class TouchControlSet{
	public:
		TouchControlSet(void);
		void addPointer(int,TouchState,float,float,bool);
		void clearControls(InputEventQueue &);
		void clearPointers(void);
		void getPermanentlyHandledTouchIds(std::vector<int,std::allocator<int>> &);
		void isTurnInteractActive(void);
		void render(InputRenderContext &);
		void setWindowSize(int,int);
		void tick(InputEventQueue &,int);
		void ~TouchControlSet();
};
