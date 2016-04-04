#pragma once
class CraftingContainer{
	public:
		CraftingContainer(int,int);
		void getContainerSize(void);
		void getItem(int);
		void getItem(int,int);
		void getMaxStackSize(void);
		void getName(void);
		void removeItem(int,int);
		void setContainerChanged(void);
		void setItem(int,ItemInstance *);
		void startOpen(Player &);
		void stopOpen(Player &);
		void ~CraftingContainer();
		void ~CraftingContainer();
};
