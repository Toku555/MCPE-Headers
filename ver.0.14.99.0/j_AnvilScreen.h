#pragma once
namespace j{
	class AnvilScreen{
		public:
		void _setFuelIngredientSelectedBlock(StickDirection);
		void _setupInventoryPane(void);
		void addItem(Touch::InventoryPane &,int);
		void ~AnvilScreen();
	}
};
