#pragma once
class StartMenuScreenController{
	public:
		StartMenuScreenController(std::shared_ptr<MinecraftScreenModel>);
		void _getButtonADescription(void);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void handleLicenseChanged(void);
		void ~StartMenuScreenController();
		void ~StartMenuScreenController();
};
