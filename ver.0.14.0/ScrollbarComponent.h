#pragma once
class ScrollbarComponent{
	public:
		ScrollbarComponent(std::shared_ptr<UIControl> &);
		void _addTouchScrollingSampleBasedOnLastPointerMoveEvent(void);
		void _isScrolling(void);
		void _resetTouchScrollingSamples(void);
		void animationPollPointerLocationData(mce::TimeStep const&);
		void clone(std::shared_ptr<UIControl> &);
		void getScrollbarBoxControl(void);
		void getTouchScrollbarBoxControl(void);
		void receive(VisualTree &,AnimationController &,ScreenEvent);
		void setDampening(float);
		void setScrollbarBoxControl(std::shared_ptr<UIControl> &);
		void setScrollbarBoxTrackButton(short);
		void setScrollbarTouchButton(short);
		void setTouchScrollbarBoxControl(std::shared_ptr<UIControl> &);
		void ~ScrollbarComponent();
		void ~ScrollbarComponent();
};
