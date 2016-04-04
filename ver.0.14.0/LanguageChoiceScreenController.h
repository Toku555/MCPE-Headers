#pragma once
class LanguageChoiceScreenController{
	public:
		LanguageChoiceScreenController(std::shared_ptr<MinecraftScreenModel>);
		void _getButtonADescription(void);
		void _handleLanguageChoiceClick(PropertyBag *);
		void _registerBindings(void);
		void ~LanguageChoiceScreenController();
		void ~LanguageChoiceScreenController();
};
