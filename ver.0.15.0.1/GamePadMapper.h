#pragma once
class GamePadMapper{
	public:
		GamePadMapper(void);
		void getDeltaTime(void);
		void getInputMode(void);
		void getInputMode(void);
		void handleButtonEvent(InputEventQueue &,GamePadButtonEvent const&);
		void handleButtonEvent(InputEventQueue &,GamePadButtonEvent const&);
		void handleStickEvent(InputEventQueue &,GamePadStickEvent const&);
		void handleStickEvent(InputEventQueue &,GamePadStickEvent const&);
		void handleTriggerEvent(InputEventQueue &,GamePadTriggerEvent const&);
		void handleTriggerEvent(InputEventQueue &,GamePadTriggerEvent const&);
		void setMapping(InputEventQueue &,BindingFactory const&,NameRegistry &,InputMapping const&);
		void setMapping(InputEventQueue &,BindingFactory const&,NameRegistry &,InputMapping const&);
		void tick(InputEventQueue &);
		void tick(InputEventQueue &);
		void tickTurn(InputEventQueue &);
		void ~GamePadMapper();
		void ~GamePadMapper();
		void ~GamePadMapper();
		void ~GamePadMapper();
};
