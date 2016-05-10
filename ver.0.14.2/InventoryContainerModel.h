#pragma once
class InventoryContainerModel{
	public:
		InventoryContainerModel(ContainerEnumName,int,Player &,int);
		void _init(void);
		void _onItemChanged(int);
		void _refreshContainer(void);
		void _refreshSlot(int);
		void containerChanged(int);
		void isValid(void);
		void ~InventoryContainerModel();
		void ~InventoryContainerModel();
};
