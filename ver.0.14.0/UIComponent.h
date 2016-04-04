#pragma once
class UIComponent{
	public:
		UIComponent(std::shared_ptr<UIControl> &);
		void getOwner(void);
		void getOwner(void);
		void receive(VisualTree &,AnimationController &,ScreenEvent);
		void ~UIComponent();
		void ~UIComponent();
};
