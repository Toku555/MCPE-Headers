#pragma once
class TestScreenController{
	public:
		TestScreenController(std::shared_ptr<MinecraftScreenModel>);
		void bind(std::string const&,std::string const&,PropertyBag &);
		void handleEvent(ScreenEvent);
		void handleLicenseChanged(void);
		void ~TestScreenController();
		void ~TestScreenController();
};
