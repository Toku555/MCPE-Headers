#pragma once
class BlockScreenController{
	public:
		BlockScreenController(std::shared_ptr<MinecraftScreenModel>,BlockPos const&,bool);
		BlockScreenController(std::shared_ptr<MinecraftScreenModel>,EntityUniqueID,bool);
		void _dispatchFlyingItems(void);
		void _isStillValid(void);
		void _registerAutoPlaceOrder(void);
		void _registerCoalesceOrder(void);
		void _registerSelectedTextBindings(void);
		void tick(void);
		void ~BlockScreenController();
		void ~BlockScreenController();
};
