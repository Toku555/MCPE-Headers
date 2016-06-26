#pragma once
class ShapelessRecipe{
	public:
		void assemble(CraftingContainer *);
		void getCraftingSize(void);
		void getMaxCraftCount(ItemPack &);
		void getResultItem(void);
		void matches(CraftingContainer *);
		void size(void);
		void ~ShapelessRecipe();
		void ~ShapelessRecipe();
};
