#pragma once
class MapExtendingRecipe{
	public:
		MapExtendingRecipe(mce::UUID const&);
		MapExtendingRecipe(void);
		void assemble(CraftingContainer &);
		void getCraftingSize(void);
		void getIngredient(int,int,int);
		void getMaxCraftCount(ItemPack const&);
		void getResultItem(void);
		void matches(CraftingContainer &,Level &);
		void size(void);
		void ~MapExtendingRecipe();
		void ~MapExtendingRecipe();
};
