#pragma once
class ContainerScreenController{
	public:
		ContainerScreenController(std::shared_ptr<MinecraftScreenModel>);
		void _getAutoPlaceOrder(std::string const&);
		void _getButtonADescription(void);
		void _getButtonXDescription(void);
		void _getCoalesceOrder(std::string const&);
		void _getCollectionIndex(PropertyBag *);
		void _getInventorySelectedItemId(void);
		void _getShouldSelectedItemStackProgressBarBeVisible(void);
		void _getStackCount(int);
		void _getStackItemColor(ItemInstance const*);
		void _getStackItemCount(ItemInstance const*);
		void _handleAutoPlace(std::string const&,int);
		void _handleButtonIsHeld(PropertyBag *,short,bool);
		void _handleDropItem(std::string const&,int,DropItemAmount);
		void _handleDropSelectedItem(DropItemAmount);
		void _handleHeldButton(int);
		void _handleSplit(std::string const&,int);
		void _handleTakeAllPlaceAll(std::string const&,int);
		void _handleTakeAmount(int,std::string const&,int);
		void _handleTakeHalfPlaceOne(std::string const&,int);
		void _handleTakePlace(short,std::string const&,int);
		void _onContainerSlotHovered(std::string const&,int);
		void _releaseHeldButton(PropertyBag *,short);
		void _resetHeldButton(void);
		void _resetSplitStack(void);
		void _selectionActive(void);
		void _updateHeldButtonStackTaken(void);
		void createContainerManagerController<EnchantingContainerManagerModel,EnchantingContainerManagerController,BlockPos const&>(BlockPos const&);
		void getCallbackInterval(void);
		void getItemInstance(std::string const&,int);
		void handleGameEventNotification(UI::GameEventNotification);
		void onOpen(void);
		void setAssociatedBlockPos(BlockPos const&);
		void setAssociatedEntityUniqueID(EntityUniqueID);
		void ~ContainerScreenController();
		void ~ContainerScreenController();
};