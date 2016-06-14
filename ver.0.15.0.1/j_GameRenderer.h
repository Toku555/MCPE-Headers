#pragma once
namespace j{
	class GameRenderer{
		public:
		void clearRenderTarget(RenderGraphContext &,MinecraftClient &);
		void clearRenderTarget(RenderGraphContext &,MinecraftClient &);
		void createRenderGraph(void);
		void renderDebugScreen(RectangleArea &);
	}
};
