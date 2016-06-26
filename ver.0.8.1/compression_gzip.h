#pragma once
namespace compression{
	class gzip{
		public:
		void compress(__sFILE *,__sFILE *,int);
		void compress(std::string const&,std::string const&,int);
		void decompress(__sFILE *,__sFILE *);
		void decompress(std::string const&,std::string const&);
	}
};
