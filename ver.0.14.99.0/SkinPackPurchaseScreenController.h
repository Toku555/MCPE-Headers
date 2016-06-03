#pragma once
class SkinPackPurchaseScreenController{
	public:
		SkinPackPurchaseScreenController(std::shared_ptr<MinecraftScreenModel>,int,int,bool);
		SkinPackPurchaseScreenController(std::shared_ptr<MinecraftScreenModel>,int,int,bool);
		void _closeModalDialog(void);
		void _closeModalDialog(void);
		void _openModalDialog(std::string const&);
		void _openModalDialog(std::string const&);
		void _registerBindings(void);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void _registerEventHandlers(void);
		void _tryBuySkinPack(void);
		void addStaticScreenVars(Json::Value &);
		void addStaticScreenVars(Json::Value &);
		void getAdditionalScreenInfo(void);
		void getAdditionalScreenInfo(void);
		void getTelemetryProperty(std::string &,std::string &);
		void getTelemetryProperty(std::string &,std::string &);
		void ~SkinPackPurchaseScreenController();
		void ~SkinPackPurchaseScreenController();
		void ~SkinPackPurchaseScreenController();
		void ~SkinPackPurchaseScreenController();
};
