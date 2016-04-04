#pragma once
class ScrollbarBoxComponent{
	public:
		ScrollbarBoxComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getScrollbarControl(void);
		void setScrollbarControl(std::weak_ptr<UIControl> const&);
		void ~ScrollbarBoxComponent();
		void ~ScrollbarBoxComponent();
};
