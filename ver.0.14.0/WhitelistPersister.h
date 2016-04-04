#pragma once
class WhitelistPersister{
	public:
		void loadFromFile(Whitelist &,GameProfileCache *,std::string const&);
		void saveToFile(Whitelist &,GameProfileCache *,std::string const&);
};
