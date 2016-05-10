#pragma once
class DefaultUIRendererCompositorStage{
	public:
		DefaultUIRendererCompositorStage(MinecraftClient &);
		void postRender(RenderGraphContext &);
		void preRender(RenderGraphContext &);
		void ~DefaultUIRendererCompositorStage();
		void ~DefaultUIRendererCompositorStage();
};
