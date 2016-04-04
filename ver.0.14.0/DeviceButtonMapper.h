#pragma once
class DeviceButtonMapper{
	public:
		void getInputMode(void);
		void handleButtonEvent(InputEventQueue &,DeviceButtonEvent const&);
		void setMapping(InputEventQueue &,BindingFactory const&,ButtonRegistry const&,InputMapping const&);
		void tick(InputEventQueue &);
		void ~DeviceButtonMapper();
		void ~DeviceButtonMapper();
};
