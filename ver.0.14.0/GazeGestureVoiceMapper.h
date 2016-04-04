#pragma once
class GazeGestureVoiceMapper{
	public:
		GazeGestureVoiceMapper(void);
		void clearInputDeviceQueue(void);
		void getInputMode(void);
		void setMapping(InputEventQueue &,BindingFactory const&,ButtonRegistry const&,InputMapping const&);
		void tick(InputEventQueue &);
		void ~GazeGestureVoiceMapper();
		void ~GazeGestureVoiceMapper();
};
