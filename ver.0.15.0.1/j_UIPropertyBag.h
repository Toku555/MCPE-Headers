#pragma once
namespace j{
	class UIPropertyBag{
		public:
		void set<bool>(std::string const&,bool);
		void set<float>(std::string const&,float);
		void set<int>(std::string const&,int);
	}
};
