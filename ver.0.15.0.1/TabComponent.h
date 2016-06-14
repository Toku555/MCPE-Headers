#pragma once
class TabComponent{
	public:
		TabComponent(std::shared_ptr<UIControl> &);
		TabComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getContentControl(void);
		void getContentControl(void);
		void getGroup(void);
		void getGroup(void);
		void getIndex(void);
		void getIndex(void);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void selectTab(VisualTree &);
		void selectTab(VisualTree &);
		void setContentControl(std::shared_ptr<UIControl> &);
		void setContentControl(std::shared_ptr<UIControl> &);
		void setGroup(int);
		void setGroup(int);
		void setIndex(int);
		void setIndex(int);
		void ~TabComponent();
		void ~TabComponent();
		void ~TabComponent();
		void ~TabComponent();
};
