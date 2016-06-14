#pragma once
namespace j{
	class SavedDataStorage{
		public:
		void save(void);
		void set(std::string const&,SavedData *);
	}
};
