#pragma once
class AnimationComponent{
	public:
		AnimationComponent(std::shared_ptr<UIControl> &,UIControlFactory &);
		AnimationComponent(std::shared_ptr<UIControl> &,UIControlFactory &);
		void _animationTick(mce::TimeStep const&);
		void _attachTick(AnimationController &);
		void addAnimation(ui::AnimationType,UIResolvedDef const&,NameRegistry &);
		void addAnimation(ui::AnimationType,UIResolvedDef const&,NameRegistry &);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void collectScreenEvents(AnimEvent,std::vector<ScreenEvent,std::allocator<ScreenEvent>> &);
		void collectScreenEvents(AnimEvent,std::vector<ScreenEvent,std::allocator<ScreenEvent>> &);
		void handleScreenEvent(AnimationController &,ScreenEvent const&);
		void handleScreenEvent(AnimationController &,ScreenEvent const&);
		void isEventListener(void);
		void isEventListener(void);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void updateProperties(void);
		void updateProperties(void);
		void ~AnimationComponent();
		void ~AnimationComponent();
		void ~AnimationComponent();
		void ~AnimationComponent();
};
