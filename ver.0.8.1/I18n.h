#pragma once
class I18n{
	public:
		void fillTranslations(AppPlatform *,std::string const&,bool);
		void get(std::string const&);
		void get(std::string const&,std::string &);
		void getDescriptionString(ItemInstance const&);
		void loadLanguage(AppPlatform *,std::string const&);
};
