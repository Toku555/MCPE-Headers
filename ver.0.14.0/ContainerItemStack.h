#pragma once
class ContainerItemStack{
	public:
		ContainerItemStack(ItemInstance *);
		ContainerItemStack(ItemInstance);
		ContainerItemStack(void);
		void decreaseCount(int);
		void getItemInstance(void);
		void getItemInstance(void);
		void isEmpty(void);
};
