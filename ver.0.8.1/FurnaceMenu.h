#pragma once
class FurnaceMenu{
	public:
		FurnaceMenu(FurnaceTileEntity *);
		void broadcastChanges(void);
		void getItems(void);
		void setData(int,int);
		void setListener(IContainerListener *);
		void setSlot(int,ItemInstance *);
		void tileEntityDestroyedIsInvalid(int);
		void ~FurnaceMenu();
		void ~FurnaceMenu();
};
