#pragma once
class SimpleContainer{
	public:
		SimpleContainer(Entity &,ContainerType,std::string const&,bool,int);
		SimpleContainer(Entity &,ContainerType,std::string const&,bool,int);
		void clearContent(void);
		void getContainerSize(void);
		void getContainerSize(void);
		void getItem(int);
		void getItem(int);
		void getMaxStackSize(void);
		void getMaxStackSize(void);
		void getName(void);
		void getName(void);
		void removeItem(int,int);
		void removeItem(int,int);
		void setContainerChanged(int);
		void setContainerChanged(int);
		void setItem(int,ItemInstance *);
		void setItem(int,ItemInstance *);
		void startOpen(Player &);
		void startOpen(Player &);
		void stopOpen(Player &);
		void stopOpen(Player &);
		void ~SimpleContainer();
		void ~SimpleContainer();
		void ~SimpleContainer();
		void ~SimpleContainer();
};
