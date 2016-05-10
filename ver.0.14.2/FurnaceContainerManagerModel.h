#pragma once
class FurnaceContainerManagerModel{
	public:
		FurnaceContainerManagerModel(ContainerID,Player &,BlockPos const&);
		void _getFurnaceEntity(void);
		void _onFurnaceFuelSlotChanged(int);
		void _onFurnaceIngredientSlotChanged(int);
		void _onFurnaceResultSlotChanged(int);
		void broadcastChanges(void);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void fireItemSmeltedEvent(ItemInstance const&,ItemInstance const&);
		void getBurnProgress(int);
		void getItems(void);
		void getLastFuelSource(void);
		void getLitProgress(int);
		void getSlot(int);
		void isFurnaceValid(float);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
		void ~FurnaceContainerManagerModel();
		void ~FurnaceContainerManagerModel();
};
