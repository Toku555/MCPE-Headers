#pragma once
class UIAnim{
	public:
		UIAnim(UIAnim const&);
		UIAnim(UIAnim const&);
		UIAnim(ui::AnimationType,AnimationComponent &,UIResolvedDef const&,NameRegistry &);
		UIAnim(ui::AnimationType,AnimationComponent &,UIResolvedDef const&,NameRegistry &);
		void _play(void);
		void _play(void);
		void _reset(UIControl &);
		void _reset(UIControl &);
		void clone(void);
		void clone(void);
		void getAnimEventFor(AnimEvent);
		void getControlNameToDestroy(void);
		void getInitialValueKey(void);
		void getInitialValueKey(void);
		void getNextAnimName(void);
		void handleScreenEvent(UIControl &,ScreenEvent const&);
		void isEventListener(void);
		void shouldDestroyAtEnd(void);
		void shouldTick(void);
		void tick(UIControl &,float);
		void tick(UIControl &,float);
		void updateProperties(AnimationComponent &);
		void updateProperties(AnimationComponent &);
		void ~UIAnim();
		void ~UIAnim();
		void ~UIAnim();
		void ~UIAnim();
};
