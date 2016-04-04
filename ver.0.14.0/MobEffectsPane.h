#pragma once
class MobEffectsPane{
	public:
		MobEffectsPane(MinecraftClient &,Font &,IntRectangle const&);
		void isRenderable(MobEffectInstance const&);
		void renderBatch(std::vector<ScrollingPane::GridItem,std::allocator<ScrollingPane::GridItem>> &,float,float,float);
		void renderItem(ScrollingPane::GridItem &,float);
		void ~MobEffectsPane();
		void ~MobEffectsPane();
};
