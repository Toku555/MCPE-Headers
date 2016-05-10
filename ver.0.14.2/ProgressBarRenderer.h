#pragma once
class ProgressBarRenderer{
	public:
		ProgressBarRenderer(void);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void setPrimaryColor(Color const&);
		void setSecondaryColor(Color const&);
		void ~ProgressBarRenderer();
		void ~ProgressBarRenderer();
};
