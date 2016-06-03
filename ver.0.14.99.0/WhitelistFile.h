#pragma once
class WhitelistFile{
	public:
		WhitelistFile(std::string const&);
		void add(Whitelist::NamedUuid);
		void add(Whitelist::NamedXuid);
		void getWhitelist(void);
		void reload(void);
		void remove(mce::UUID const&);
		void remove(std::string const&);
};
