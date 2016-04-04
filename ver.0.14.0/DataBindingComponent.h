#pragma once
class DataBindingComponent{
	public:
		DataBindingComponent(std::shared_ptr<UIControl> &);
		void _bindConcreteFields(std::string const&,std::shared_ptr<UIControl> const&,VisualTree &);
		void _updateCollectionBindingIndicies(void);
		void addAnimationBinding(std::string const&,std::string const&);
		void addCollectionBinding(std::string const&,std::string const&,std::string const&,BindingCondition);
		void addCollectionDetailsBinding(std::string const&,BindingCondition);
		void addGlobalBinding(std::string const&,std::string const&,BindingCondition);
		void clone(std::shared_ptr<UIControl> &);
		void ~DataBindingComponent();
		void ~DataBindingComponent();
};
