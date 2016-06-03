#pragma once
class CraftingContainerManagerController{
	public:
		CraftingContainerManagerController(std::weak_ptr<CraftingContainerManagerModel>);
		CraftingContainerManagerController(std::weak_ptr<CraftingContainerManagerModel>);
		void _craftItem(ContainerItemStack &);
		void _craftItem(ContainerItemStack &);
		void _filterRecipes(void);
		void _handleCreativeAutoPlace(std::string const&,int,std::vector<std::string,std::allocator<std::string>> const&);
		void _handleCreativeAutoPlace(std::string const&,int,std::vector<std::string,std::allocator<std::string>> const&);
		void _handleCreativeItem(ContainerItemStack &,std::string const&,int,ItemTakeType);
		void _handleCreativeItem(ContainerItemStack &,std::string const&,int,ItemTakeType);
		void _isCreativeContainer(std::string const&);
		void _isCreativeContainer(std::string const&);
		void _setupCallbacks(void);
		void _setupCallbacks(void);
		void _updateCraftingResultItem(void);
		void _updateCraftingResultItem(void);
		void closeCraftingScreen(void);
		void closeCraftingScreen(void);
		void handleAutoPlace(std::string const&,int,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>> const&);
		void handleAutoPlace(std::string const&,int,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>> const&);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void handlePlaceOne(ContainerItemStack &,std::string const&,int);
		void handlePlaceOne(ContainerItemStack &,std::string const&,int);
		void handleSplit(ContainerItemStack &,std::string const&,int,bool);
		void handleSplit(ContainerItemStack &,std::string const&,int,bool);
		void handleTakeAll(ContainerItemStack &,std::string const&,int);
		void handleTakeAll(ContainerItemStack &,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,ItemTakeType,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,ItemTakeType,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,int,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,int,std::string const&,int);
		void handleTakeHalf(ContainerItemStack &,std::string const&,int);
		void handleTakeHalf(ContainerItemStack &,std::string const&,int);
		void isValid(float);
		void isValid(float);
		void ~CraftingContainerManagerController();
		void ~CraftingContainerManagerController();
		void ~CraftingContainerManagerController();
		void ~CraftingContainerManagerController();
};