#pragma once
class TabComponent{
	public:
		TabComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getContentControl(void);
		void getGroup(void);
		void getIndex(void);
		void receive(VisualTree &,AnimationController &,ScreenEvent);
		void setContentControl(std::shared_ptr<UIControl> &);
		void setGroup(int);
		void setIndex(int);
		void ~TabComponent();
		void ~TabComponent();
};
