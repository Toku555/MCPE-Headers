#pragma once
class ChestContainerManagerModel{
	public:
		ChestContainerManagerModel(ContainerID,Player &,BlockPos const&);
		ChestContainerManagerModel(ContainerID,Player &,BlockPos const&);
		ChestContainerManagerModel(ContainerID,Player &,EntityUniqueID);
		ChestContainerManagerModel(ContainerID,Player &,EntityUniqueID);
		void _getBlockEntity(void);
		void closeContainer(void);
		void closeContainer(void);
		void fireFullCobbleStoneEvent(void);
		void fireFullCobbleStoneEvent(void);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void init(void);
		void init(void);
		void isValid(float);
		void isValid(float);
		void ~ChestContainerManagerModel();
		void ~ChestContainerManagerModel();
		void ~ChestContainerManagerModel();
		void ~ChestContainerManagerModel();
};
