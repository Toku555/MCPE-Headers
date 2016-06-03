#pragma once
namespace j{
	class FurnaceScreen{
		public:
		void _recheckRecipes(void);
		void _setFuelIngredientSelectedBlock(StickDirection);
		void _setupInventoryPane(void);
		void addItem(Touch::InventoryPane &,int);
		void isAllowed(int);
		void ~FurnaceScreen();
	}
};
