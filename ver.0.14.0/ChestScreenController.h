#pragma once
class ChestScreenController{
	public:
		ChestScreenController(std::shared_ptr<MinecraftScreenModel>,BlockPos const&);
		ChestScreenController(std::shared_ptr<MinecraftScreenModel>,EntityUniqueID);
		void _registerAutoPlaceOrder(void);
		void _registerCoalesceOrder(void);
		void ~ChestScreenController();
		void ~ChestScreenController();
};
