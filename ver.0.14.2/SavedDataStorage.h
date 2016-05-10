#pragma once
class SavedDataStorage{
	public:
		void _save(SavedData *);
		void load(SavedData *,std::string const&);
		void save(void);
		void set(std::string const&,SavedData *);
		void ~SavedDataStorage();
		void ~SavedDataStorage();
};
