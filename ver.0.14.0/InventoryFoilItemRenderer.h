#pragma once
class InventoryFoilItemRenderer{
	public:
		InventoryFoilItemRenderer(void);
		void clone(void);
		void getMaterialName(void);
		void getTextureName(int);
		void preRenderSetup(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &);
		void update(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~InventoryFoilItemRenderer();
		void ~InventoryFoilItemRenderer();
};
