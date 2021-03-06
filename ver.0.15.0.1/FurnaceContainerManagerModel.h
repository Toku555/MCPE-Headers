#pragma once
class FurnaceContainerManagerModel{
	public:
		FurnaceContainerManagerModel(ContainerID,Player &,BlockPos const&);
		FurnaceContainerManagerModel(ContainerID,Player &,BlockPos const&);
		void _getFurnaceEntity(void);
		void _onFurnaceFuelSlotChanged(int);
		void _onFurnaceFuelSlotChanged(int);
		void _onFurnaceIngredientSlotChanged(int);
		void _onFurnaceIngredientSlotChanged(int);
		void _onFurnaceResultSlotChanged(int);
		void _onFurnaceResultSlotChanged(int);
		void broadcastChanges(void);
		void broadcastChanges(void);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void fireItemSmeltedEvent(ItemInstance const&,ItemInstance const&);
		void fireItemSmeltedEvent(ItemInstance const&,ItemInstance const&);
		void getBurnProgress(int);
		void getBurnProgress(int);
		void getItems(void);
		void getItems(void);
		void getLastFuelSource(void);
		void getLastFuelSource(void);
		void getLitProgress(int);
		void getLitProgress(int);
		void getSlot(int);
		void getSlot(int);
		void init(void);
		void init(void);
		void isFurnaceValid(float);
		void isFurnaceValid(float);
		void setData(int,int);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
		void setSlot(int,ItemInstance &);
		void ~FurnaceContainerManagerModel();
		void ~FurnaceContainerManagerModel();
		void ~FurnaceContainerManagerModel();
		void ~FurnaceContainerManagerModel();
};
