#pragma once
class AnimationComponent{
	public:
		AnimationComponent(std::shared_ptr<UIControl> &,UIControlFactory &);
		void _attachTick(AnimationController &);
		void addAnimation(UI::AnimationType,UIResolvedDef const&);
		void bind(std::string const&,PropertyBag const&);
		void clone(std::shared_ptr<UIControl> &);
		void handleButtonEvent(AnimationController &,ButtonScreenEventData const&);
		void isButtonEventListener(void);
		void receive(VisualTree &,AnimationController &,ScreenEvent);
		void ~AnimationComponent();
		void ~AnimationComponent();
};
