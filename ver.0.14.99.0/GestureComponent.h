#pragma once
class GestureComponent{
	public:
		GestureComponent(std::shared_ptr<UIControl> &);
		GestureComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setTrackpadButtonId(short);
		void setTrackpadButtonId(short);
		void ~GestureComponent();
		void ~GestureComponent();
};
