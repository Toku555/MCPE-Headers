#pragma once
class ContainerManagerController{
	public:
		void _addContainer(std::shared_ptr<ContainerController>);
		void _buildContainerControllers(void);
		void _coalesceSplitStack(ContainerItemStack &);
		void _onItemAcquired(ContainerItemStack const&,std::string const&);
		void _spreadStackInContainers(ContainerItemStack &,bool);
		void getAndResetContainerDirty(void);
		void getContainerController(std::string);
		void getContainerManagerModel(void);
		void getContainerModel(std::string);
		void getItemInstance(std::string const&,int);
		void getStackCount(std::string const&,int);
		void handleAutoPlace(std::string const&,int,std::vector<std::string,std::allocator<std::string>> const&);
		void handleCoalesceStack(ContainerItemStack &,std::string const&,std::vector<std::string,std::allocator<std::string>> &);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void handlePlaceOne(ContainerItemStack &,std::string const&,int);
		void handleSplit(ContainerItemStack &,std::string const&,int,bool);
		void handleTakeAll(ContainerItemStack &,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,ItemTakeType,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,int,std::string const&,int);
		void handleTakeHalf(ContainerItemStack &,std::string const&,int);
		void isValid(float);
		void resetSplitStack(void);
		void ~ContainerManagerController();
		void ~ContainerManagerController();
};
