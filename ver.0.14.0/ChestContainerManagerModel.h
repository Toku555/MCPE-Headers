#pragma once
class ChestContainerManagerModel{
	public:
		ChestContainerManagerModel(ContainerID,Player &,BlockPos const&);
		ChestContainerManagerModel(ContainerID,Player &,EntityUniqueID);
		void _getBlockEntity(void);
		void closeContainer(void);
		void fireFullCobbleStoneEvent(void);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void init(void);
		void isValid(void);
		void ~ChestContainerManagerModel();
		void ~ChestContainerManagerModel();
};
