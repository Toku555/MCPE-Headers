#pragma once
class ContainerController{
	public:
		ContainerController(std::weak_ptr<ContainerModel>,bool);
		void _addItem(int,int);
		void _canAdd(int,ItemInstance const*,ItemPlaceType);
		void _canAdd(int,int);
		void _canRemove(int,ItemTakeType);
		void _canRemove(int,int);
		void _canSet(int,ItemInstance const*,ItemPlaceType);
		void _onItemChanged(int);
		void addToStack(int,ContainerItemStack,ItemTakeType);
		void autoPlaceItems(ContainerItemStack);
		void autoPlaceItemsWithTracking(ContainerItemStack,std::vector<int,std::allocator<int>> &);
		void canSet(ItemInstance const*,bool);
		void canSet(int,ItemInstance const*,bool);
		void getContainerModel(void);
		void getContainerName(void);
		void getContainerSize(void);
		void getDropItemsOnDelete(void);
		void getItem(int);
		void removeItem(int,ItemTakeType);
		void removeItem(int,int);
		void setItem(int,ContainerItemStack,ItemPlaceType,bool);
		void takeAllItemsOfType(ContainerItemStack,bool);
		void ~ContainerController();
		void ~ContainerController();
};
