#pragma once
namespace DataBindingComponent{
	class DataBinding{
		public:
		void DataBinding(DataBindingComponent::DataBinding const&);
		void DataBinding(DataBindingComponent::DataBinding const&);
		void operator=(DataBindingComponent::DataBinding const&);
		void operator=(DataBindingComponent::DataBinding const&);
		void ~DataBinding();
		void ~DataBinding();
		DataBindingComponent(std::shared_ptr<UIControl> &);
		DataBindingComponent(std::shared_ptr<UIControl> &);
		void _bind(ScreenController &,UIControlFactory &,bool,std::vector<DataBindingComponent::DataBinding,std::allocator<DataBindingComponent::DataBinding>> &);
		void _bind(ScreenController &,UIControlFactory &,bool,std::vector<DataBindingComponent::DataBinding,std::allocator<DataBindingComponent::DataBinding>> &);
		void _isPriorityBinding(DataBindingComponent::DataBinding const&);
		void _isPriorityBinding(DataBindingComponent::DataBinding const&);
		void _updateCollectionBindingIndicies(void);
		void _updateCollectionBindingIndicies(void);
		void _updateCustomComponentsPostBinding(std::string const&,UIControlFactory &,std::shared_ptr<UIControl> const&);
		void _updateCustomComponentsPostBinding(std::string const&,UIControlFactory &,std::shared_ptr<UIControl> const&);
		void addCollectionBinding(std::string const&,std::string const&,std::string const&,BindingCondition);
		void addCollectionBinding(std::string const&,std::string const&,std::string const&,BindingCondition);
		void addCollectionDetailsBinding(std::string const&,std::string const&,BindingCondition);
		void addCollectionDetailsBinding(std::string const&,std::string const&,BindingCondition);
		void addGlobalBinding(std::string const&,std::string const&,BindingCondition);
		void addGlobalBinding(std::string const&,std::string const&,BindingCondition);
		void addViewBinding(std::shared_ptr<UIControl> &,std::string const&,std::string const&);
		void addViewBinding(std::shared_ptr<UIControl> &,std::string const&,std::string const&);
		void bindHighPriorityBinds(ScreenController &,UIControlFactory &,bool);
		void bindHighPriorityBinds(ScreenController &,UIControlFactory &,bool);
		void bindLowPriorityBinds(ScreenController &,UIControlFactory &,bool);
		void bindLowPriorityBinds(ScreenController &,UIControlFactory &,bool);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void function<void ();
		void function<void ();
		void registerViewBindings(UIControlFactory &);
		void registerViewBindings(UIControlFactory &);
		void ~DataBindingComponent();
		void ~DataBindingComponent();
		void ~DataBindingComponent();
		void ~DataBindingComponent();
	}
};
