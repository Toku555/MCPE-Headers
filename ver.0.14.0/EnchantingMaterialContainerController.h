#pragma once
class EnchantingMaterialContainerController{
	public:
		EnchantingMaterialContainerController(std::shared_ptr<ContainerModel>);
		void _canSet(int,ItemInstance const*,ItemPlaceType);
		void ~EnchantingMaterialContainerController();
		void ~EnchantingMaterialContainerController();
};
