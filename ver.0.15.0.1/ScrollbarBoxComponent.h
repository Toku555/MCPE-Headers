#pragma once
class ScrollbarBoxComponent{
	public:
		ScrollbarBoxComponent(std::shared_ptr<UIControl> &);
		ScrollbarBoxComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getScrollView(void);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setScrollView(std::weak_ptr<UIControl> const&);
		void setScrollView(std::weak_ptr<UIControl> const&);
		void ~ScrollbarBoxComponent();
		void ~ScrollbarBoxComponent();
		void ~ScrollbarBoxComponent();
		void ~ScrollbarBoxComponent();
};
