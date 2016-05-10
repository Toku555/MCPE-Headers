#pragma once
class ArmorContainerModel{
	public:
		ArmorContainerModel(ContainerEnumName,int,Player &);
		void _init(void);
		void _onItemChanged(int);
		void _refreshContainer(void);
		void _refreshSlot(int);
		void containerChanged(int);
		void isValid(void);
		void ~ArmorContainerModel();
		void ~ArmorContainerModel();
};
