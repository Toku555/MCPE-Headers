#pragma once
class InventoryItemRenderer{
	public:
		InventoryItemRenderer(void);
		InventoryItemRenderer(void);
		void _getRenderTypeFromItem(ItemInstance const&);
		void clone(void);
		void clone(void);
		void getBatchType(void);
		void getBatchType(void);
		void getCustomId(void);
		void getCustomId(void);
		void getMaterialName(int);
		void getMaterialName(int);
		void getNumRenderPasses(void);
		void getNumRenderPasses(void);
		void getRequiresPreRenderSetup(int);
		void getRequiresPreRenderSetup(int);
		void getResourceLocation(int,int);
		void getResourceLocation(int,int);
		void preRenderSetup(void);
		void preRenderSetup(void);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int,RectangleArea &);
		void render(MinecraftClient &,std::shared_ptr<UIControl> &,int,RectangleArea &);
		void update(MinecraftClient &,std::shared_ptr<UIControl> &);
		void update(MinecraftClient &,std::shared_ptr<UIControl> &);
		void ~InventoryItemRenderer();
		void ~InventoryItemRenderer();
		void ~InventoryItemRenderer();
		void ~InventoryItemRenderer();
};
