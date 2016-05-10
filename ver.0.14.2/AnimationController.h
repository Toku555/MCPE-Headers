#pragma once
class AnimationController{
	public:
		AnimationController(void);
		void AnimationStatus (AnimationComponent::*);
		void AnimationStatus (ScrollbarComponent::*);
		void removeComponentAnimationCallback<ScrollbarComponent>(ScrollbarComponent *);
		void removeComponentAnimationCallback<ScrollbarComponent>(ScrollbarComponent *);
};
