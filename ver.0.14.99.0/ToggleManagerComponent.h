#pragma once
class ToggleManagerComponent{
	public:
		ToggleManagerComponent(std::shared_ptr<UIControl> &);
		ToggleManagerComponent(std::shared_ptr<UIControl> &);
		void _defaultToggleGroupState(VisualTree &);
		void _defaultToggleGroupState(VisualTree &);
		void _gatherToggleGroupState(VisualTree &);
		void _gatherToggleGroupState(VisualTree &);
		void _updateToggleGroupState(VisualTree &,bool);
		void _updateToggleGroupState(VisualTree &,bool);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setBehavior(ToggleManagerBehavior);
		void setBehavior(ToggleManagerBehavior);
		void setGroupNames(std::vector<short,std::allocator<short>> &);
		void setGroupNames(std::vector<short,std::allocator<short>> &);
		void ~ToggleManagerComponent();
		void ~ToggleManagerComponent();
		void ~ToggleManagerComponent();
		void ~ToggleManagerComponent();
};
