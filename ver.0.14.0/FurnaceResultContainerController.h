#pragma once
class FurnaceResultContainerController{
	public:
		FurnaceResultContainerController(std::shared_ptr<ContainerModel>);
		void _canAdd(int,ItemInstance const*,ItemPlaceType);
		void _canAdd(int,int);
		void _canSet(int,ItemInstance const*,ItemPlaceType);
		void ~FurnaceResultContainerController();
		void ~FurnaceResultContainerController();
};
