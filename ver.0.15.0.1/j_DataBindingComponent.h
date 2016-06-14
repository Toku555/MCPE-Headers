#pragma once
namespace j{
	class DataBindingComponent{
		public:
		void addViewBinding(std::shared_ptr<UIControl> &,std::string const&,std::string const&);
	}
};
