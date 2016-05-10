#pragma once
class HudContainerModel{
	public:
		HudContainerModel(ContainerEnumName,Player &);
		void _init(void);
		void _refreshContainer(void);
		void _refreshSlot(int,int);
		void containerChanged(int);
		void isValid(void);
		void ~HudContainerModel();
		void ~HudContainerModel();
};
