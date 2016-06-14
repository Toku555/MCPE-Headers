#pragma once
class ContainerMenu{
	public:
		ContainerMenu(Player &,BlockPos const&);
		ContainerMenu(Player &,BlockPos const&);
		ContainerMenu(Player &,EntityUniqueID const&);
		ContainerMenu(Player &,EntityUniqueID const&);
		void _getContainer(void);
		void _getContainer(void);
		void getItems(void);
		void getItems(void);
		void getSlot(int);
		void getSlot(int);
		void removeSlot(int,int);
		void removeSlot(int,int);
		void setSlot(int,ItemInstance &);
		void setSlot(int,ItemInstance &);
		void ~ContainerMenu();
		void ~ContainerMenu();
		void ~ContainerMenu();
		void ~ContainerMenu();
};
