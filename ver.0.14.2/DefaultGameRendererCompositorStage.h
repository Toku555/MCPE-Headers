#pragma once
class DefaultGameRendererCompositorStage{
	public:
		DefaultGameRendererCompositorStage(MinecraftClient &);
		void postRender(RenderGraphContext &);
		void preRender(RenderGraphContext &);
		void ~DefaultGameRendererCompositorStage();
		void ~DefaultGameRendererCompositorStage();
};
