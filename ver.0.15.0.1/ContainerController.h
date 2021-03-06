#pragma once
class ContainerController{
	public:
		ContainerController(std::weak_ptr<ContainerModel>,bool);
		ContainerController(std::weak_ptr<ContainerModel>,bool);
		ContainerController(std::weak_ptr<ContainerModel>,bool);
		void _addItem(int,int);
		void _addItem(int,int);
		void _canAdd(int,ItemInstance const*,ItemPlaceType);
		void _canAdd(int,ItemInstance const*,ItemPlaceType);
		void _canAdd(int,int);
		void _canAdd(int,int);
		void _canRemove(int,ItemTakeType);
		void _canRemove(int,ItemTakeType);
		void _canRemove(int,int);
		void _canRemove(int,int);
		void _canSet(int,ItemInstance const*,ItemPlaceType);
		void _canSet(int,ItemInstance const*,ItemPlaceType);
		void _onItemChanged(int);
		void _onItemChanged(int);
		void addToStack(int,ContainerItemStack,ItemTakeType);
		void addToStack(int,ContainerItemStack,ItemTakeType);
		void autoPlaceItems(ContainerItemStack &,bool);
		void autoPlaceItems(ContainerItemStack &,bool);
		void autoPlaceItemsWithTracking(ContainerItemStack,std::vector<int,std::allocator<int>> &);
		void autoPlaceItemsWithTracking(ContainerItemStack,std::vector<int,std::allocator<int>> &);
		void canSet(ItemInstance const*,bool);
		void canSet(ItemInstance const*,bool);
		void canSet(int,ItemInstance const*,bool);
		void canSet(int,ItemInstance const*,bool);
		void getContainerModel(void);
		void getContainerModel(void);
		void getContainerName(void);
		void getContainerName(void);
		void getContainerSize(void);
		void getContainerSize(void);
		void getDropItemsOnDelete(void);
		void getDropItemsOnDelete(void);
		void getItem(int);
		void getItem(int);
		void removeItem(int,ItemTakeType);
		void removeItem(int,ItemTakeType);
		void removeItem(int,int);
		void removeItem(int,int);
		void setItem(int,ContainerItemStack &,ItemPlaceType,bool);
		void setItem(int,ContainerItemStack &,ItemPlaceType,bool);
		void takeAllItemsOfType(ContainerItemStack &,bool);
		void takeAllItemsOfType(ContainerItemStack &,bool);
		void ~ContainerController();
		void ~ContainerController();
		void ~ContainerController();
		void ~ContainerController();
};
