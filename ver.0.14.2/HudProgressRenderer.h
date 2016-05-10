#pragma once
class HudProgressRenderer{
	public:
		HudProgressRenderer(void);
		void _buildFeedbackCircle(MinecraftClient &);
		void _buildInnerFeedbackCircle(MinecraftClient &,int,float);
		void _buildOuterFeedbackCircle(MinecraftClient &,int,float,float);
		void _renderProgressIndicator(MinecraftClient &,int,int,float);
		void clone(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void ~HudProgressRenderer();
		void ~HudProgressRenderer();
};
