#pragma once
class AnvilContainerManagerController{
	public:
		AnvilContainerManagerController(std::weak_ptr<AnvilContainerManagerModel>);
		AnvilContainerManagerController(std::weak_ptr<AnvilContainerManagerModel>);
		void _clearSlot(std::string);
		void _consumeMaterials(void);
		void _consumeMaterials(void);
		void _createResult(void);
		void _createResult(void);
		void _isTooExpensive(void);
		void _isTooExpensive(void);
		void _mayPickup(void);
		void _mayPickup(void);
		void _onAnvilResultChanged(int);
		void _onAnvilResultChanged(int);
		void _playerHasEnoughXP(void);
		void _playerHasEnoughXP(void);
		void _setupCallbacks(void);
		void _setupCallbacks(void);
		void getCostText(void);
		void getCostText(void);
		void getHasInputItem(void);
		void getHasInputItem(void);
		void getResultName(void);
		void getResultName(void);
		void handleAutoPlace(std::string const&,int,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>> const&);
		void handleAutoPlace(std::string const&,int,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>> const&);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void handlePlaceOne(ContainerItemStack &,std::string const&,int);
		void handlePlaceOne(ContainerItemStack &,std::string const&,int);
		void handleTakeAll(ContainerItemStack &,std::string const&,int);
		void handleTakeAll(ContainerItemStack &,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,ItemTakeType,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,ItemTakeType,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,int,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,int,std::string const&,int);
		void handleTakeHalf(ContainerItemStack &,std::string const&,int);
		void handleTakeHalf(ContainerItemStack &,std::string const&,int);
		void isAnvilValid(float);
		void isAnvilValid(float);
		void setResultName(std::string const&);
		void setResultName(std::string const&);
		void shouldCrossOutIconBeVisible(void);
		void shouldCrossOutIconBeVisible(void);
		void shouldDrawGreen(void);
		void shouldDrawGreen(void);
		void shouldDrawRed(void);
		void shouldDrawRed(void);
		void ~AnvilContainerManagerController();
		void ~AnvilContainerManagerController();
		void ~AnvilContainerManagerController();
		void ~AnvilContainerManagerController();
};
