#pragma once
class VRInformationScreenController{
	public:
		VRInformationScreenController(std::shared_ptr<MinecraftScreenModel>);
		void _getButtonADescription(void);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void ~VRInformationScreenController();
		void ~VRInformationScreenController();
};
