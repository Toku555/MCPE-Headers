#pragma once
class MapUpgradingRecipe{
	public:
		MapUpgradingRecipe(mce::UUID const&);
		MapUpgradingRecipe(void);
		void assemble(CraftingContainer &);
		void getCraftingSize(void);
		void getIngredient(int,int,int);
		void getMaxCraftCount(ItemPack const&);
		void getResultItem(void);
		void matches(CraftingContainer &,Level &);
		void size(void);
		void ~MapUpgradingRecipe();
		void ~MapUpgradingRecipe();
};
