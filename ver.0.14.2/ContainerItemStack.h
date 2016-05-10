#pragma once
class ContainerItemStack{
	public:
		ContainerItemStack(ItemInstance *);
		ContainerItemStack(ItemInstance);
		ContainerItemStack(void);
		void decreaseCount(int);
		void getCount(void);
		void getItemInstance(void);
		void getItemInstance(void);
		void increaseCount(int);
		void isEmpty(void);
		void operator+(ContainerItemStack const&);
		void operator-(ContainerItemStack const&);
};
