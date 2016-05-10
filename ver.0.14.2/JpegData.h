#pragma once
class JpegData{
	public:
		void ReadJpgComments(char const*,std::string &);
		void WriteJpgComments(char const*,std::string const&);
};
