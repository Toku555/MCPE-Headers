#pragma once
class MouseMapper{
	public:
		void _getMouseScrollMagnitude(char);
		void clearInputDeviceQueue(void);
		void getCursorPos(float &,float &);
		void getInputMode(void);
		void setMapping(InputEventQueue &,BindingFactory const&,ButtonRegistry const&,InputMapping const&);
		void tick(InputEventQueue &);
		void ~MouseMapper();
		void ~MouseMapper();
};
