#pragma once
class RepairItemRecipe{
	public:
		RepairItemRecipe(mce::UUID const*);
		void assemble(CraftingContainer &);
		void getCraftingSize(void);
		void getIngredient(int,int,int);
		void getMaxCraftCount(ItemPack const&);
		void getResultItem(void);
		void matches(CraftingContainer &,Level &);
		void size(void);
		void ~RepairItemRecipe();
		void ~RepairItemRecipe();
};
