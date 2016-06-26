#pragma once
class IContainerListener{
	public:
		void refreshContainer(BaseContainerMenu *,std::vector<ItemInstance,std::allocator<ItemInstance>> const&);
		void setContainerData(BaseContainerMenu *,int,int);
		void slotChanged(BaseContainerMenu *,int,ItemInstance const&,bool);
		void ~IContainerListener();
		void ~IContainerListener();
};
