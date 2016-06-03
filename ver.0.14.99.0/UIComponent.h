#pragma once
class UIComponent{
	public:
		UIComponent(std::shared_ptr<UIControl> &);
		UIComponent(std::shared_ptr<UIControl> &);
		void getOwner(void);
		void getOwner(void);
		void getOwner(void);
		void getOwner(void);
		void onNotifyChildAdded(void);
		void onNotifyChildAdded(void);
		void onNotifyChildRemoved(void);
		void onNotifyChildRemoved(void);
		void receive(ScreenEvent);
		void receive(ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void ~UIComponent();
		void ~UIComponent();
		void ~UIComponent();
		void ~UIComponent();
};
