#pragma once
class AnimationController{
	public:
		AnimationController(void);
		AnimationController(void);
		void _tick(std::vector<AnimationController::AnimationUIControlFunctionCallback,std::allocator<AnimationController::AnimationUIControlFunctionCallback>> &,mce::TimeStep const&,std::vector&<ScreenEvent,std::allocator<std::vector&>>);
		void AnimationStatus (AnimationComponent::*);
		void AnimationStatus (AnimationComponent::*);
		void AnimationStatus (ScrollViewComponent::*);
		void AnimationStatus (ScrollViewComponent::*);
		void removeComponentAnimationCallback<ScrollViewComponent>(ScrollViewComponent *);
		void removeComponentAnimationCallback<ScrollViewComponent>(ScrollViewComponent *);
		void tickFixedTimestep(mce::TimeStep const&,std::vector<ScreenEvent,std::allocator<ScreenEvent>> &);
		void tickFixedTimestep(mce::TimeStep const&,std::vector<ScreenEvent,std::allocator<ScreenEvent>> &);
		void tickRenderTimestep(mce::TimeStep const&,std::vector<ScreenEvent,std::allocator<ScreenEvent>> &);
		void tickRenderTimestep(mce::TimeStep const&,std::vector<ScreenEvent,std::allocator<ScreenEvent>> &);
		void ~AnimationController();
		void ~AnimationController();
};
