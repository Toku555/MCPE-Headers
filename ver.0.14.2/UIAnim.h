#pragma once
class UIAnim{
	public:
		UIAnim(ui::AnimationType,AnimationComponent &,UIResolvedDef const&);
		void _play(void);
		void _reset(UIControl &);
		void getControlNameToDestroy(void);
		void getInitialValueKey(void);
		void getNextAnimName(void);
		void handleScreenEvent(UIControl &,ScreenEvent const&);
		void isEventListener(void);
		void shouldDestroyAtEnd(void);
		void shouldTick(void);
		void tick(UIControl &,float);
		void ~UIAnim();
		void ~UIAnim();
};
