#pragma once
class CraftingContainerManagerModel{
	public:
		CraftingContainerManagerModel(ContainerID,Player &,bool,BlockPos const&);
		CraftingContainerManagerModel(ContainerID,Player &,bool,BlockPos const&);
		void _isWorkbenchValid(void);
		void broadcastChanges(void);
		void broadcastChanges(void);
		void closeCraftingScreen(void);
		void closeCraftingScreen(void);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void fireItemAcquiredEvent(ItemInstance const&,int);
		void fireItemCraftedEvent(ItemInstance const&);
		void fireItemCraftedEvent(ItemInstance const&);
		void getIsWorkBench(void);
		void getIsWorkBench(void);
		void getItems(void);
		void getItems(void);
		void getSlot(int);
		void getSlot(int);
		void init(void);
		void init(void);
		void isValid(float);
		void isValid(float);
		void sendCraftedPacket(CraftingEventPacket const&);
		void sendCraftedPacket(CraftingEventPacket const&);
		void setData(int,int);
		void setData(int,int);
		void setSlot(int,ItemInstance &);
		void setSlot(int,ItemInstance &);
		void ~CraftingContainerManagerModel();
		void ~CraftingContainerManagerModel();
		void ~CraftingContainerManagerModel();
		void ~CraftingContainerManagerModel();
};
