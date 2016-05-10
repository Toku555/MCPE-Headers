#pragma once
class TrialUpsellScreenController{
	public:
		TrialUpsellScreenController(std::shared_ptr<MinecraftScreenModel>);
		void _getButtonADescription(void);
		void _registerEventHandlers(void);
		void handleLicenseChanged(void);
		void ~TrialUpsellScreenController();
		void ~TrialUpsellScreenController();
};
