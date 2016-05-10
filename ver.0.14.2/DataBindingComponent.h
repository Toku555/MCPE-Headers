#pragma once
class DataBindingComponent{
	public:
		DataBindingComponent(std::shared_ptr<UIControl> &);
		void _updateCollectionBindingIndicies(void);
		void _updateCustomComponentsPostBinding(std::string const&,UIControlFactory &,std::shared_ptr<UIControl> const&);
		void addCollectionBinding(std::string const&,std::string const&,std::string const&,BindingCondition);
		void addCollectionDetailsBinding(std::string const&,BindingCondition);
		void addGlobalBinding(std::string const&,std::string const&,BindingCondition);
		void addViewBinding(std::shared_ptr<UIControl> &,std::string const&,std::string const&);
		void clone(std::shared_ptr<UIControl> &);
		void ~DataBindingComponent();
		void ~DataBindingComponent();
};
