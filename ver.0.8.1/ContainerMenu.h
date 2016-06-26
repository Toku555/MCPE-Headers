#pragma once
class ContainerMenu{
	public:
		ContainerMenu(Container *,int);
		void getItems(void);
		void setSlot(int,ItemInstance *);
		void tileEntityDestroyedIsInvalid(int);
		void ~ContainerMenu();
		void ~ContainerMenu();
};
