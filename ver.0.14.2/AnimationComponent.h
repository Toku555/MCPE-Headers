#pragma once
class AnimationComponent{
	public:
		AnimationComponent(std::shared_ptr<UIControl> &,UIControlFactory &);
		void _attachTick(AnimationController &);
		void addAnimation(ui::AnimationType,UIResolvedDef const&);
		void clone(std::shared_ptr<UIControl> &);
		void handleScreenEvent(AnimationController &,ScreenEvent const&);
		void isEventListener(void);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void updateProperties(void);
		void ~AnimationComponent();
		void ~AnimationComponent();
};
