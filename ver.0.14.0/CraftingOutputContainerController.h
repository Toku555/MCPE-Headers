#pragma once
class CraftingOutputContainerController{
	public:
		CraftingOutputContainerController(std::shared_ptr<ContainerModel>);
		void _canAdd(int,ItemInstance const*,ItemPlaceType);
		void _canAdd(int,int);
		void _canRemove(int,ItemTakeType);
		void _canRemove(int,int);
		void _canSet(int,ItemInstance const*,ItemPlaceType);
		void ~CraftingOutputContainerController();
		void ~CraftingOutputContainerController();
};
