#pragma once
class SliderBoxComponent{
	public:
		SliderBoxComponent(std::shared_ptr<UIControl> &);
		SliderBoxComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getSliderControl(void);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setSliderControl(std::weak_ptr<UIControl> const&);
		void setSliderControl(std::weak_ptr<UIControl> const&);
		void ~SliderBoxComponent();
		void ~SliderBoxComponent();
		void ~SliderBoxComponent();
		void ~SliderBoxComponent();
};
