#pragma once
class Container{
	public:
		void addAdditionalSaveData(CompoundTag &);
		void addItem(ItemInstance *);
		void addItemToFirstEmptySlot(ItemInstance *);
		void addListener(ContainerListener *);
		void canPullOutItem(int,int,ItemInstance *);
		void canPushInItem(int,int,ItemInstance *);
		void dropContents(BlockSource &,Vec3 const&);
		void getContainerType(void);
		void getItemCount(int);
		void getRandomEmptySlot(Random &);
		void getRedstoneSignalFromContainer(void);
		void getSlotCopies(void);
		void getSlots(void);
		void hasCustomName(void);
		void readAdditionalSaveData(CompoundTag const&);
		void removeListener(ContainerListener *);
		void setContainerChanged(int);
		void setCustomName(std::string const&);
		void ~Container();
		void ~Container();
};
