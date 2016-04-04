#pragma once
class LevelContainerModel{
	public:
		LevelContainerModel(ContainerEnumName,int,Player &,int,BlockEntityType,BlockPos const&);
		LevelContainerModel(ContainerEnumName,int,Player &,int,EntityUniqueID);
		void _getBlockEntity(void);
		void _getEntity(void);
		void _init(void);
		void _onItemChanged(int);
		void _refreshContainer(void);
		void _refreshSlot(int);
		void containerChanged(int);
		void getContainer(void);
		void isValid(void);
		void ~LevelContainerModel();
		void ~LevelContainerModel();
};
