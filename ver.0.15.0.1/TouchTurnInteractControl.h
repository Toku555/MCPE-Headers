#pragma once
class TouchTurnInteractControl{
	public:
		void function<RectangleArea ();
		void getNewActivePointer(TouchPointResults &,float &,float &);
		void incrementMoveDelta(InputEventQueue &,float,float,int);
		void isActive(void);
		void switchState(InputEventQueue &,TouchTurnInteractControl::State);
		void tick(InputEventQueue &,TouchPointResults &,int);
		void updateActivePointer(TouchPointResults &,float &,float &);
		void ~TouchTurnInteractControl();
		void ~TouchTurnInteractControl();
};
