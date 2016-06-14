#pragma once
namespace j{
	class ContainerManagerController{
		public:
		void getItemInstance(std::string const&,int);
		void getStackCount(std::string const&,int);
		void handleAutoPlace(std::string const&,int,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>> const&);
		void handlePlaceAll(ContainerItemStack &,std::string const&,int);
		void handlePlaceOne(ContainerItemStack &,std::string const&,int);
		void handleTakeAll(ContainerItemStack &,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,ItemTakeType,std::string const&,int);
		void handleTakeAmount(ContainerItemStack &,int,std::string const&,int);
		void handleTakeHalf(ContainerItemStack &,std::string const&,int);
		void ~ContainerManagerController();
	}
};
