#pragma once
class SkinPickerScreenController{
	public:
		SkinPickerScreenController(std::shared_ptr<MinecraftScreenModel>);
		SkinPickerScreenController(std::shared_ptr<MinecraftScreenModel>);
		void _clearSelectionAndTryExit(void);
		void _closeModalDialog(void);
		void _closeModalDialog(void);
		void _openModalDialog(std::string const&);
		void _openModalDialog(std::string const&);
		void _pickCustomSkin(void);
		void _registerBindings(void);
		void _registerBindings(void);
		void _registerEventHandlers(void);
		void _registerEventHandlers(void);
		void _storePreviousSkinSelection(MinecraftScreenModel::SkinInfo const&);
		void _storePreviousSkinSelection(MinecraftScreenModel::SkinInfo const&);
		void canExit(void);
		void canExit(void);
		void onTerminate(void);
		void onTerminate(void);
		void ~SkinPickerScreenController();
		void ~SkinPickerScreenController();
		void ~SkinPickerScreenController();
		void ~SkinPickerScreenController();
};
