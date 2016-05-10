#pragma once
class TickingTextureStage{
	public:
		TickingTextureStage(MinecraftClient &);
		void _createRenderTarget(mce::TexturePtr &,mce::RenderContext &);
		void _needsToCreateRenderTarget(void);
		void createRenderTarget(mce::RenderContext &);
		void postRender(RenderGraphContext &);
		void preRender(RenderGraphContext &);
		void render(RenderGraphContext &);
		void ~TickingTextureStage();
		void ~TickingTextureStage();
};
