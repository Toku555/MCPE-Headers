#pragma once
class CarouselTextComponent{
	public:
		CarouselTextComponent(std::shared_ptr<UIControl> &);
		void _getParentArea(UIRenderContext &);
		void clone(std::shared_ptr<UIControl> &);
		void getHoverAlpha(void);
		void getHoverColor(void);
		void getPressedAlpha(void);
		void getPressedColor(void);
		void getRotateSpeed(void);
		void isAlwaysRotating(void);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setAlwaysRotate(bool);
		void setHoverAlpha(float);
		void setHoverColor(Color const&);
		void setPressedAlpha(float);
		void setPressedColor(Color const&);
		void setRotateSpeed(float);
		void ~CarouselTextComponent();
		void ~CarouselTextComponent();
};
