#pragma once
class DeviceButtonMapper{
	public:
		DeviceButtonMapper(void);
		void getInputMode(void);
		void getInputMode(void);
		void handleButtonEvent(InputEventQueue &,DeviceButtonEvent const&);
		void setMapping(InputEventQueue &,BindingFactory const&,NameRegistry &,InputMapping const&);
		void setMapping(InputEventQueue &,BindingFactory const&,NameRegistry &,InputMapping const&);
		void tick(InputEventQueue &);
		void tick(InputEventQueue &);
		void ~DeviceButtonMapper();
		void ~DeviceButtonMapper();
		void ~DeviceButtonMapper();
		void ~DeviceButtonMapper();
};
