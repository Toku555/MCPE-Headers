#pragma once
class SkirtRenderer{
	public:
		SkirtRenderer(void);
		void init(MinecraftClient *);
		void renderInner(void);
		void renderOuter(void);
		void setupRendering(MatrixStack::Ref &);
		void ~SkirtRenderer();
};
