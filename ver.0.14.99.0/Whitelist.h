#pragma once
class Whitelist{
	public:
		void add(Whitelist::NamedUuid);
		void add(Whitelist::NamedUuid);
		void add(Whitelist::NamedXuid);
		void add(Whitelist::NamedXuid);
		void clear(void);
		void clear(void);
		void isAllowed(mce::UUID const&,std::string const&);
		void isAllowed(mce::UUID const&,std::string const&);
		void remove(mce::UUID const&);
		void remove(mce::UUID const&);
		void remove(std::string const&);
		void remove(std::string const&);
		void ~Whitelist();
		void ~Whitelist();
};
