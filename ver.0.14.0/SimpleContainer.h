#pragma once
class SimpleContainer{
	public:
		void clearContent(void);
		void getContainerSize(void);
		void getItem(int);
		void getMaxStackSize(void);
		void getName(void);
		void removeItem(int,int);
		void setContainerChanged(int);
		void setItem(int,ItemInstance *);
		void startOpen(Player &);
		void stopOpen(Player &);
		void ~SimpleContainer();
		void ~SimpleContainer();
};
