#pragma once
class RealmsCreateScreenController{
	public:
		RealmsCreateScreenController(std::shared_ptr<MinecraftScreenModel>,bool);
		RealmsCreateScreenController(std::shared_ptr<MinecraftScreenModel>,bool);
		void _closeModalDialog(void);
		void _closeModalDialog(void);
		void _errorDialogCreateRealmFail(void);
		void _errorDialogCreateRealmFail(void);
		void _errorDialogHasUnfulfilledPurchases(void);
		void _errorDialogHasUnfulfilledPurchases(void);
		void _errorDialogMaxRealms(void);
		void _errorDialogMaxRealms(void);
		void _handleCreateRealm(void);
		void _handleCreateRealm(void);
		void _openModalDialog(std::string const&);
		void _openModalDialog(std::string const&);
		void _registerBindings(void);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void _registerEventHandlers(void);
		void _validateRealmName(void);
		void addStaticScreenVars(Json::Value &);
		void addStaticScreenVars(Json::Value &);
		void tick(void);
		void tick(void);
		void ~RealmsCreateScreenController();
		void ~RealmsCreateScreenController();
		void ~RealmsCreateScreenController();
		void ~RealmsCreateScreenController();
};
