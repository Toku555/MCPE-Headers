#pragma once
class FurnaceRecipes{
	public:
		FurnaceRecipes(void);
		void addFurnaceRecipe(int,ItemInstance const&);
		void getInstance(void);
		void getRecipes(void);
		void getResult(int);
		void isFurnaceItem(int);
		void teardownFurnaceRecipes(void);
};
