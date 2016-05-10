#pragma once
class ScrollbarComponent{
	public:
		ScrollbarComponent(std::shared_ptr<UIControl> &);
		void _addTouchScrollingSampleBasedOnLastPointerMoveEvent(void);
		void _notifyScrollingState(ScreenInputContext &,short);
		void _resetTouchScrollingSamples(void);
		void allowTouchScrolling(void);
		void animationPollPointerLocationData(mce::TimeStep const&);
		void clone(std::shared_ptr<UIControl> &);
		void getScrollbarBoxControl(void);
		void getTouchScrollbarBoxControl(void);
		void isScrolling(void);
		void lockTouchScrolling(bool);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setDampening(float);
		void setScrollbarBoxControl(std::shared_ptr<UIControl> &);
		void setScrollbarBoxTrackButton(short);
		void setScrollbarTouchButton(short);
		void setScrollingEventIds(NameRegistry &);
		void setTouchScrollbarBoxControl(std::shared_ptr<UIControl> &);
		void ~ScrollbarComponent();
		void ~ScrollbarComponent();
};
