#pragma once
class MinecraftScreenController{
	public:
		MinecraftScreenController(std::shared_ptr<MinecraftScreenModel>);
		void _getButtonADescription(void);
		void _getButtonXDescription(void);
		void _getGamepadHelperVisible(void);
		void _getNameId(std::string const&);
		void _isStillValid(void);
		void _setExitBehavior(ScreenExitBehavior);
		void getInputMode(void);
		void getInventorySlot(void);
		void getItemStackSizeAsString(ItemInstance const*);
		void handleGameEventNotification(ui::GameEventNotification);
		void onOpen(void);
		void setSuspendInput(bool);
		void tick(void);
		void ~MinecraftScreenController();
		void ~MinecraftScreenController();
};
