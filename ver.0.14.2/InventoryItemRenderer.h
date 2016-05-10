#pragma once
class InventoryItemRenderer{
	public:
		InventoryItemRenderer(void);
		void _getRenderTypeFromItem(ItemInstance const&);
		void clone(void);
		void getBatchType(void);
		void getCustomId(void);
		void getMaterialName(int);
		void getNumRenderPasses(void);
		void getRequiresPreRenderSetup(int);
		void getTextureName(int,int);
		void preRenderSetup(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int);
		void update(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~InventoryItemRenderer();
		void ~InventoryItemRenderer();
};
