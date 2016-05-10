#pragma once
class MapCloningRecipe{
	public:
		MapCloningRecipe(mce::UUID const&);
		MapCloningRecipe(void);
		void assemble(CraftingContainer &);
		void getCraftingSize(void);
		void getIngredient(int,int,int);
		void getMaxCraftCount(ItemPack const&);
		void getResultItem(void);
		void matches(CraftingContainer &,Level &);
		void size(void);
		void ~MapCloningRecipe();
		void ~MapCloningRecipe();
};
