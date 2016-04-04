#pragma once
class MinecraftInputRenderContext{
	public:
		void RenderText(void);
		void drawRect(RectangleArea const&,int,int,int,int);
		void drawText(RectangleArea const&,std::string const&);
		void measureText(glm::detail::tvec2<float> const&,std::string const&);
		void setColor(Color const&);
		void ~MinecraftInputRenderContext();
		void ~MinecraftInputRenderContext();
};
