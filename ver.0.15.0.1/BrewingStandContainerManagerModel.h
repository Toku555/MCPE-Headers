#pragma once
class BrewingStandContainerManagerModel{
	public:
		BrewingStandContainerManagerModel(ContainerID,Player &,BlockPos const&);
		BrewingStandContainerManagerModel(ContainerID,Player &,BlockPos const&);
		void _getBrewingStandEntity(void);
		void _onInputSlotChanged(void);
		void _onInputSlotChanged(void);
		void _onOutputSlotChanged(int);
		void _onOutputSlotChanged(int);
		void broadcastChanges(void);
		void broadcastChanges(void);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void firePotionBrewedEvent(ItemInstance const&,int);
		void firePotionBrewedEvent(ItemInstance const&,int);
		void getBrewProgress(int);
		void getBrewProgress(int);
		void getBubbleProgress(int);
		void getBubbleProgress(int);
		void getItems(void);
		void getItems(void);
		void getSlot(int);
		void getSlot(int);
		void init(void);
		void init(void);
		void isStandValid(float);
		void setData(int,int);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
		void setSlot(int,ItemInstance &);
		void ~BrewingStandContainerManagerModel();
		void ~BrewingStandContainerManagerModel();
		void ~BrewingStandContainerManagerModel();
		void ~BrewingStandContainerManagerModel();
};
