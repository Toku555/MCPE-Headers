#pragma once
class GameProfileCache{
	public:
		GameProfileCache(void);
		void getProfile(mce::UUID const&);
		void setNonvalidatedProfile(mce::UUID const&,std::string const&);
		void ~GameProfileCache();
};
