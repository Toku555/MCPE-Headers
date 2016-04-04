#pragma once
class ShapelessRecipe{
	public:
		void assemble(CraftingContainer &);
		void getCraftingSize(void);
		void getIngredient(int,int,int);
		void getIngredients(void);
		void getMaxCraftCount(ItemPack const&);
		void getResultItem(void);
		void isShapeless(void);
		void matches(CraftingContainer &,Level &);
		void setId(mce::UUID const&);
		void size(void);
		void ~ShapelessRecipe();
		void ~ShapelessRecipe();
};
