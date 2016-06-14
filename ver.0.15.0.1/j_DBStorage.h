#pragma once
namespace j{
	class DBStorage{
		public:
		void _writeAsync(std::string const&,std::string &&);
		void ~DBStorage();
	}
};
