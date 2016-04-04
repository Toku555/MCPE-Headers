#pragma once
class FurnaceRecipes{
	public:
		FurnaceRecipes(void);
		void addFurnaceRecipe(int,ItemInstance const&);
		void addFurnaceRecipeAuxData(short,short,ItemInstance const&);
		void clearFurnaceRecipes(void);
		void getInstance(void);
		void getResult(ItemInstance const*);
		void isFurnaceItem(ItemInstance *);
		void teardownFurnaceRecipes(void);
};
