#pragma once
class AnvilScreenController{
	public:
		AnvilScreenController(std::shared_ptr<MinecraftScreenModel>,BlockPos const&);
		void _getButtonADescription(void);
		void _getButtonXDescription(void);
		void _isStillValid(void);
		void _onContainerSlotHovered(std::string const&,int);
		void _registerAutoPlaceOrder(void);
		void _registerCoalesceOrder(void);
		void ~AnvilScreenController();
		void ~AnvilScreenController();
};
