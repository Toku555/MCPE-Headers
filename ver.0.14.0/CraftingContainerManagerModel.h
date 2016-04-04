#pragma once
class CraftingContainerManagerModel{
	public:
		CraftingContainerManagerModel(ContainerID,Player &,bool,BlockPos const&);
		void _isWorkbenchValid(void);
		void broadcastChanges(void);
		void closeCraftingScreen(void);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void fireItemCraftedEvent(ItemInstance const&);
		void getIsWorkBench(void);
		void getItems(void);
		void getSlot(int);
		void init(void);
		void isValid(void);
		void sendCraftedPacket(CraftingEventPacket const&);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
		void ~CraftingContainerManagerModel();
		void ~CraftingContainerManagerModel();
};
