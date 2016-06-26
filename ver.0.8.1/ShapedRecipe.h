#pragma once
class ShapedRecipe{
	public:
		void assemble(CraftingContainer *);
		void getCraftingSize(void);
		void getItems(void);
		void getMaxCraftCount(ItemPack &);
		void getResultItem(void);
		void matches(CraftingContainer *);
		void matches(CraftingContainer *,int,int,bool);
		void size(void);
		void ~ShapedRecipe();
		void ~ShapedRecipe();
};
