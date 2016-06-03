#pragma once
class MinecraftScreenController{
	public:
		MinecraftScreenController(std::shared_ptr<MinecraftScreenModel>);
		MinecraftScreenController(std::shared_ptr<MinecraftScreenModel>);
		MinecraftScreenController(std::shared_ptr<MinecraftScreenModel>);
		void _getButtonADescription(void);
		void _getButtonADescription(void);
		void _getButtonBDescription(void);
		void _getButtonBDescription(void);
		void _getButtonXDescription(void);
		void _getButtonXDescription(void);
		void _getButtonYDescription(void);
		void _getButtonYDescription(void);
		void _getGamepadHelperVisible(void);
		void _getGamepadHelperVisible(void);
		void _getGestureControlEnabled(void);
		void _getNameId(std::string const&);
		void _getNameId(std::string const&);
		void _isStillValid(void);
		void _isStillValid(void);
		void _registerBindings(void);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void _registerEventHandlers(void);
		void _setExitBehavior(ScreenExitBehavior);
		void _setExitBehavior(ScreenExitBehavior);
		void getInputMode(void);
		void getInventorySlot(void);
		void getInventorySlot(void);
		void getItemStackSizeAsString(ItemInstance const*);
		void getItemStackSizeAsString(ItemInstance const*);
		void handleGameEventNotification(ui::GameEventNotification);
		void handleGameEventNotification(ui::GameEventNotification);
		void setSuspendInput(bool);
		void setSuspendInput(bool);
		void tick(void);
		void tick(void);
		void tryExit(void);
		void tryExit(void);
		void ~MinecraftScreenController();
		void ~MinecraftScreenController();
		void ~MinecraftScreenController();
		void ~MinecraftScreenController();
};