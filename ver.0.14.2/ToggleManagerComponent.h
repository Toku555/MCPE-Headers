#pragma once
class ToggleManagerComponent{
	public:
		ToggleManagerComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setBehavior(ToggleManagerBehavior);
		void setGroupNames(std::vector<short,std::allocator<short>> &);
		void ~ToggleManagerComponent();
		void ~ToggleManagerComponent();
};
