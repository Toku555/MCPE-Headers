#pragma once
class MinecraftScreenController{
	public:
		MinecraftScreenController(std::shared_ptr<MinecraftScreenModel>);
		void _getButtonADescription(void);
		void _getButtonId(std::string const&);
		void _getButtonXDescription(void);
		void _isStillValid(void);
		void _setExitBehavior(ScreenExitBehavior);
		void getInputMode(void);
		void getItemStackSizeAsString(ItemInstance const*);
		void getKeyboardHeight(void);
		void handleGameEventNotification(UI::GameEventNotification);
		void hideKeyboard(void);
		void onOpen(void);
		void setSuspendInput(bool);
		void showKeyboard(std::string const&,int,bool,bool,Vec2 const&);
		void tick(void);
		void ~MinecraftScreenController();
		void ~MinecraftScreenController();
};
