#pragma once
class CraftingContainerManagerController{
	public:
		void _filterRecipes(void);
		void _handleCreativeAutoPlace(std::string const&,int,std::vector<std::string,std::allocator<std::string>> const&);
		void _handleCreativeItem(ContainerItemStack &,std::string const&,int,ItemTakeType);
		void _isCreativeContainer(std::string const&);
		void closeCraftingScreen(void);
		void handleAutoPlace(std::string const&,int,std::vector<std::string,std::allocator<std::string>> const&);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void handlePlaceOne(ContainerItemStack &,std::string const&,int);
		void handleTakeAll(ContainerItemStack &,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,ItemTakeType,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,int,std::string const&,int);
		void handleTakeHalf(ContainerItemStack &,std::string const&,int);
		void isValid(void);
		void ~CraftingContainerManagerController();
		void ~CraftingContainerManagerController();
};
