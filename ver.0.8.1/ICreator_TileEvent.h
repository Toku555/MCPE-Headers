#pragma once
namespace ICreator{
	class TileEvent{
		public:
		void write(std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>> &,IPosTranslator &);
	}
};
