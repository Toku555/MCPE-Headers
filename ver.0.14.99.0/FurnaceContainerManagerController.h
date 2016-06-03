#pragma once
class FurnaceContainerManagerController{
	public:
		FurnaceContainerManagerController(std::weak_ptr<FurnaceContainerManagerModel>);
		FurnaceContainerManagerController(std::weak_ptr<FurnaceContainerManagerModel>);
		void _isFurnaceInputCollectionName(std::string const&);
		void _onItemAcquired(ContainerItemStack const&,std::string const&);
		void _onItemAcquired(ContainerItemStack const&,std::string const&);
		void _xpRewardMultiplier(ItemInstance const&);
		void _xpRewardMultiplier(ItemInstance const&);
		void getBurnProgress(int);
		void getBurnProgress(int);
		void getLitProgress(int);
		void getLitProgress(int);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void handlePlaceOne(ContainerItemStack &,std::string const&,int);
		void handlePlaceOne(ContainerItemStack &,std::string const&,int);
		void isFurnaceValid(float);
		void isFurnaceValid(float);
		void ~FurnaceContainerManagerController();
		void ~FurnaceContainerManagerController();
		void ~FurnaceContainerManagerController();
		void ~FurnaceContainerManagerController();
};
