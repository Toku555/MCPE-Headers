#pragma once
class BrewingStandContainerManagerController{
	public:
		BrewingStandContainerManagerController(std::weak_ptr<BrewingStandContainerManagerModel>);
		BrewingStandContainerManagerController(std::weak_ptr<BrewingStandContainerManagerModel>);
		void _calculateValidPotionBrewed(ContainerItemStack const&);
		void _calculateValidPotionBrewed(ContainerItemStack const&);
		void _onItemAcquired(ContainerItemStack const&,std::string const&);
		void _onItemAcquired(ContainerItemStack const&,std::string const&);
		void getBrewProgress(int);
		void getBrewProgress(int);
		void getBubbleProgress(int);
		void getBubbleProgress(int);
		void isStandValid(float);
		void isStandValid(float);
		void ~BrewingStandContainerManagerController();
		void ~BrewingStandContainerManagerController();
		void ~BrewingStandContainerManagerController();
		void ~BrewingStandContainerManagerController();
};
