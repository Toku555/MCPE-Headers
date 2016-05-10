#pragma once
class HoverTextRenderer{
	public:
		HoverTextRenderer(void);
		void _buildTextbox(MinecraftClient &);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void update(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~HoverTextRenderer();
		void ~HoverTextRenderer();
};
