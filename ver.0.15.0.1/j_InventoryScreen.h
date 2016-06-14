#pragma once
namespace j{
	class InventoryScreen{
		public:
		void _handleArmorInventoryNavigation(StickDirection);
		void _handleArmorJoyStickNavigation(StickDirection);
		void _selectInDirection(StickDirection);
		void _takeAndClearArmorSlot(ArmorSlot);
		void _updateArmorItems(void);
		void addItem(Touch::InventoryPane &,int);
		void ~InventoryScreen();
	}
};
