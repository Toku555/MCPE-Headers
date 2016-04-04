#pragma once
class Token{
	public:
		Token(std::string const&);
		void _parseRandom(void);
		void compatibleWith(Token::Type);
		void getBool(bool);
		void getText(std::string const&);
		void getValue(int);
		void tokenize(std::string const&);
};
