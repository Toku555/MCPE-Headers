#pragma once
class FurnaceContainerManagerController{
	public:
		void _isFurnaceInputCollectionName(std::string const&);
		void _onItemAcquired(ContainerItemStack const&,std::string const&);
		void _xpRewardMultiplier(ItemInstance const&);
		void getBurnProgress(int);
		void getLitProgress(int);
		void handleAutoPlace(std::string const&,int,std::vector<std::string,std::allocator<std::string>> const&);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void handlePlaceOne(ContainerItemStack &,std::string const&,int);
		void isFurnaceValid(void);
		void ~FurnaceContainerManagerController();
		void ~FurnaceContainerManagerController();
};
