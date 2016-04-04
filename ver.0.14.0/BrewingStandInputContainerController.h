#pragma once
class BrewingStandInputContainerController{
	public:
		BrewingStandInputContainerController(std::shared_ptr<ContainerModel>);
		void _canSet(int,ItemInstance const*,ItemPlaceType);
		void ~BrewingStandInputContainerController();
		void ~BrewingStandInputContainerController();
};
