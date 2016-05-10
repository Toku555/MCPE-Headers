#pragma once
class GamePadMapper{
	public:
		void getDeltaTime(void);
		void getInputMode(void);
		void handleButtonEvent(InputEventQueue &,GamePadButtonEvent const&);
		void handleStickEvent(InputEventQueue &,GamePadStickEvent const&);
		void handleTriggerEvent(InputEventQueue &,GamePadTriggerEvent const&);
		void setMapping(InputEventQueue &,BindingFactory const&,NameRegistry &,InputMapping const&);
		void tick(InputEventQueue &);
		void tickTurn(InputEventQueue &);
		void ~GamePadMapper();
		void ~GamePadMapper();
};
