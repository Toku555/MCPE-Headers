#pragma once
class ScrollBar{
	public:
		ScrollBar(void);
		void createMouseScrollBars(void);
		void render(MinecraftClient *,bool);
		void setMarginsPixelOffsets(float,float,float);
		void setRenderColorType(ScrollBar::RenderColorType);
		void update(IntRectangle const&,float,int);
		void updateScale(float);
		void ~ScrollBar();
};
