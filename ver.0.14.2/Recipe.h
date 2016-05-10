#pragma once
class Recipe{
	public:
		Recipe(Recipe&&);
		void getId(void);
		void getItemPack(void);
		void isAnyAuxValue(ItemInstance const*);
		void isAnyAuxValue(int);
		void isMultiRecipe(void);
		void ~Recipe();
		void ~Recipe();
};
