#pragma once
class MouseMapper{
	public:
		MouseMapper(void);
		void _getMouseScrollMagnitude(char);
		void clearInputDeviceQueue(void);
		void clearInputDeviceQueue(void);
		void getCursorPos(float &,float &);
		void getCursorPos(float &,float &);
		void getInputMode(void);
		void getInputMode(void);
		void setMapping(InputEventQueue &,BindingFactory const&,NameRegistry &,InputMapping const&);
		void setMapping(InputEventQueue &,BindingFactory const&,NameRegistry &,InputMapping const&);
		void tick(InputEventQueue &);
		void tick(InputEventQueue &);
		void ~MouseMapper();
		void ~MouseMapper();
		void ~MouseMapper();
		void ~MouseMapper();
};
