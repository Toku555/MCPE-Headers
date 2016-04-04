#pragma once
class WhitelistFile{
	public:
		WhitelistFile(std::string const&,GameProfileCache *);
		void add(mce::UUID const&);
		void add(mce::UUID const&,std::string const&);
		void getWhitelist(void);
		void reload(void);
		void remove(mce::UUID const&);
};
