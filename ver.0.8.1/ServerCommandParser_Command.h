#pragma once
namespace ServerCommandParser{
	class Command{
		public:
		void checkParameters(std::vector<ServerCommandParser::Token,std::allocator<ServerCommandParser::Token>> const&);
		void ~Command();
		void Token(std::string const&);
		void executeCommand(GuiMessage const&);
	}
};
