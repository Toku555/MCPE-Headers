#pragma once
class StartMenuScreenController{
	public:
		StartMenuScreenController(std::shared_ptr<MinecraftScreenModel>);
		void _getButtonADescription(void);
		void handleLicenseChanged(void);
		void tick(void);
		void ~StartMenuScreenController();
		void ~StartMenuScreenController();
};
