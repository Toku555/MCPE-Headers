#pragma once
namespace ServerCommandParser{
	class Command{
		public:
		void string ();
		void checkParameters(std::vector<Token,std::allocator<Token>> const&);
		void string ();
		void clear(void);
		void result(std::string const&);
	}
};
