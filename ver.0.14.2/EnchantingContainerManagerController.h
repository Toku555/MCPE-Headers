#pragma once
class EnchantingContainerManagerController{
	public:
		void enchantResult(int);
		void getCostForOption(int);
		void getStatusForOption(int);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void isTableValid(float);
		void shouldBookBeOpen(void);
		void ~EnchantingContainerManagerController();
		void ~EnchantingContainerManagerController();
};
