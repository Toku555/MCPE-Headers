#pragma once
namespace j{
	class BrewingStandScreen{
		public:
		void _setSelectedBlock(StickDirection);
		void _setupInventoryPane(void);
		void addItem(Touch::InventoryPane &,int);
		void ~BrewingStandScreen();
	}
};
