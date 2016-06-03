#pragma once
class BaseContainerMenu{
	public:
		BaseContainerMenu(Player &,ContainerType);
		BaseContainerMenu(Player &,ContainerType);
		void broadcastChanges(void);
		void broadcastChanges(void);
		void containerChanged(int);
		void containerChanged(int);
		void distanceCheck(BlockPos const&,float);
		void distanceCheck(BlockPos const&,float);
		void getContainerId(void);
		void getContainerId(void);
		void getContainerType(void);
		void getContainerType(void);
		void isResultSlot(int);
		void isResultSlot(int);
		void isSlotDirty(int);
		void isSlotDirty(int);
		void setContainerId(ContainerID);
		void setContainerId(ContainerID);
		void setContainerType(ContainerType);
		void setContainerType(ContainerType);
		void setData(int,int);
		void setData(int,int);
		void ~BaseContainerMenu();
		void ~BaseContainerMenu();
		void ~BaseContainerMenu();
		void ~BaseContainerMenu();
};
