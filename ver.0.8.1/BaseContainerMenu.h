#pragma once
class BaseContainerMenu{
	public:
		BaseContainerMenu(int);
		void broadcastChanges(void);
		void isResultSlot(int);
		void setData(int,int);
		void setListener(IContainerListener *);
		void ~BaseContainerMenu();
		void ~BaseContainerMenu();
};
