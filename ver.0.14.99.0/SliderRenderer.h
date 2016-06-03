#pragma once
class SliderRenderer{
	public:
		SliderRenderer(void);
		void _renderBackground(glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&);
		void _renderBackgroundOutline(glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&,int);
		void _renderProgress(glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&,float,bool);
		void _renderStep(glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&,Color const&);
		void _renderSteps(glm::detail::tvec2<float> const&,glm::detail::tvec2<float> const&,float,bool,int);
		void clone(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int,RectangleArea &);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int,RectangleArea &);
		void setProgressBarBackgroundColor(Color);
		void setProgressBarBackgroundColor(Color);
		void setProgressBarProgressColor(Color);
		void setProgressBarProgressColor(Color);
		void ~SliderRenderer();
		void ~SliderRenderer();
		void ~SliderRenderer();
		void ~SliderRenderer();
};
