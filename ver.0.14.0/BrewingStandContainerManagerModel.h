#pragma once
class BrewingStandContainerManagerModel{
	public:
		BrewingStandContainerManagerModel(ContainerID,Player &,BlockPos const&);
		void _getBrewingStandEntity(void);
		void _onInputSlotChanged(void);
		void _onOutputSlotChanged(int);
		void broadcastChanges(void);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void firePotionBrewedEvent(ItemInstance const&,int);
		void getBrewProgress(int);
		void getBubbleProgress(int);
		void getItems(void);
		void getSlot(int);
		void isStandValid(void);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
		void ~BrewingStandContainerManagerModel();
		void ~BrewingStandContainerManagerModel();
};
