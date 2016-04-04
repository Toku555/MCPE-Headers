#pragma once
class InventoryItemRenderer{
	public:
		InventoryItemRenderer(void);
		void _getRenderTypeFromItem(ItemInstance const&);
		void clone(void);
		void getBatchType(void);
		void getCustomId(void);
		void getMaterialName(void);
		void getTextureName(int);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &);
		void update(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~InventoryItemRenderer();
		void ~InventoryItemRenderer();
};
