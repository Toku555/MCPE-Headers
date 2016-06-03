#pragma once
class SliderManagerComponent{
	public:
		SliderManagerComponent(std::shared_ptr<UIControl> &);
		SliderManagerComponent(std::shared_ptr<UIControl> &);
		void _gatherSliderGroupState(VisualTree &);
		void _gatherSliderGroupState(VisualTree &);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setBehavior(SliderManagerBehavior);
		void setBehavior(SliderManagerBehavior);
		void setGroupNames(std::vector<short,std::allocator<short>>);
		void setGroupNames(std::vector<short,std::allocator<short>>);
		void ~SliderManagerComponent();
		void ~SliderManagerComponent();
		void ~SliderManagerComponent();
		void ~SliderManagerComponent();
};
