#pragma once
class ScrollTrackComponent{
	public:
		ScrollTrackComponent(std::shared_ptr<UIControl> &);
		ScrollTrackComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getScrollView(void);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setScrollView(std::weak_ptr<UIControl> const&);
		void setScrollView(std::weak_ptr<UIControl> const&);
		void ~ScrollTrackComponent();
		void ~ScrollTrackComponent();
		void ~ScrollTrackComponent();
		void ~ScrollTrackComponent();
};
