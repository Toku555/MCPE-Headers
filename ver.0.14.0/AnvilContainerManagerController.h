#pragma once
class AnvilContainerManagerController{
	public:
		void _clearSlot(std::string);
		void _isTooExpensive(void);
		void _mayPickup(void);
		void _onAnvilResultChanged(int);
		void _playerHasEnoughXP(void);
		void getCostText(void);
		void getHasInputItem(void);
		void getResultName(void);
		void handleAutoPlace(std::string const&,int,std::vector<std::string,std::allocator<std::string>> const&);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void handlePlaceOne(ContainerItemStack &,std::string const&,int);
		void handleTakeAll(ContainerItemStack &,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,ItemTakeType,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,int,std::string const&,int);
		void handleTakeHalf(ContainerItemStack &,std::string const&,int);
		void isAnvilValid(void);
		void setResultName(std::string const&);
		void shouldCrossOutIconBeVisible(void);
		void shouldDrawGreen(void);
		void shouldDrawRed(void);
		void ~AnvilContainerManagerController();
		void ~AnvilContainerManagerController();
};
