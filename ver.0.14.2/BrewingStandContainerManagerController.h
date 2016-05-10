#pragma once
class BrewingStandContainerManagerController{
	public:
		void _calculateValidPotionBrewed(ContainerItemStack const&);
		void _onItemAcquired(ContainerItemStack const&,std::string const&);
		void getBrewProgress(int);
		void getBubbleProgress(int);
		void isStandValid(float);
		void ~BrewingStandContainerManagerController();
		void ~BrewingStandContainerManagerController();
};
