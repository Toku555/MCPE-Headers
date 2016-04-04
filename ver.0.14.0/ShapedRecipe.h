#pragma once
class ShapedRecipe{
	public:
		ShapedRecipe(ShapedRecipe&&);
		void assemble(CraftingContainer &);
		void getCraftingSize(void);
		void getHeight(void);
		void getIngredient(int,int,int);
		void getItems(void);
		void getMaxCraftCount(ItemPack const&);
		void getResultItem(void);
		void getWidth(void);
		void isShapeless(void);
		void matches(CraftingContainer &,Level &);
		void matches(CraftingContainer &,int,int,bool);
		void setId(mce::UUID const&);
		void size(void);
		void ~ShapedRecipe();
		void ~ShapedRecipe();
};
