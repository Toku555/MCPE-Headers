#pragma once
class ButtonComponent{
	public:
		ButtonComponent(std::shared_ptr<UIControl> &);
		ButtonComponent(std::shared_ptr<UIControl> &);
		void _updateControlVisibility(void);
		void _updateControlVisibility(void);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getDefaultStateControl(void);
		void getHoverStateControl(void);
		void getPressedStateControl(void);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setDefaultStateControl(std::shared_ptr<UIControl> &);
		void setDefaultStateControl(std::shared_ptr<UIControl> &);
		void setHoverStateControl(std::shared_ptr<UIControl> &);
		void setHoverStateControl(std::shared_ptr<UIControl> &);
		void setPressedStateControl(std::shared_ptr<UIControl> &);
		void setPressedStateControl(std::shared_ptr<UIControl> &);
		void setVisible(std::weak_ptr<UIControl> &,bool);
		void ~ButtonComponent();
		void ~ButtonComponent();
		void ~ButtonComponent();
		void ~ButtonComponent();
};
