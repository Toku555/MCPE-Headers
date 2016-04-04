#pragma once
class BaseContainerMenu{
	public:
		BaseContainerMenu(Player &,ContainerType);
		void broadcastChanges(void);
		void containerChanged(int);
		void getContainerId(void);
		void getContainerType(void);
		void isResultSlot(int);
		void isSlotDirty(int);
		void setContainerId(ContainerID);
		void setContainerType(ContainerType);
		void setData(int,int);
		void ~BaseContainerMenu();
		void ~BaseContainerMenu();
};
