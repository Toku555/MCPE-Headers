#pragma once
class ResourcePackPurchaseScreenController{
	public:
		ResourcePackPurchaseScreenController(std::shared_ptr<MinecraftScreenModel>,int,bool);
		ResourcePackPurchaseScreenController(std::shared_ptr<MinecraftScreenModel>,int,bool);
		void _buyResourcePack(void);
		void _closeModalDialog(void);
		void _closeModalDialog(void);
		void _openModalDialog(std::string const&);
		void _openModalDialog(std::string const&);
		void _registerBindings(void);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void _registerEventHandlers(void);
		void _tryResourcePack(void);
		void addStaticScreenVars(Json::Value &);
		void addStaticScreenVars(Json::Value &);
		void getAdditionalScreenInfo(void);
		void getAdditionalScreenInfo(void);
		void ~ResourcePackPurchaseScreenController();
		void ~ResourcePackPurchaseScreenController();
		void ~ResourcePackPurchaseScreenController();
		void ~ResourcePackPurchaseScreenController();
};
