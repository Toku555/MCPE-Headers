#pragma once
class CraftingScreenController{
	public:
		CraftingScreenController(std::shared_ptr<MinecraftScreenModel>,bool,BlockPos const&);
		void _getButtonXDescription(void);
		void _isCreativeContainer(std::string const&);
		void _isStillValid(void);
		void _onContainerSlotHovered(std::string const&,int);
		void _registerAutoPlaceOrder(void);
		void _registerCoalesceOrder(void);
		void _shouldEmptyArmorImageBeVisible(int);
		void ~CraftingScreenController();
		void ~CraftingScreenController();
};
