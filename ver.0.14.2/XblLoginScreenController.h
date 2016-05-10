#pragma once
class XblLoginScreenController{
	public:
		XblLoginScreenController(std::shared_ptr<MinecraftScreenModel>);
		void _getButtonADescription(void);
		void _registerEventHandlers(void);
		void _showSignin(void);
		void onOpen(void);
		void ~XblLoginScreenController();
		void ~XblLoginScreenController();
};
