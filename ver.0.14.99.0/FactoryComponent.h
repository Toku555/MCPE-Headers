#pragma once
class FactoryComponent{
	public:
		FactoryComponent(std::shared_ptr<UIControl> &);
		FactoryComponent(std::shared_ptr<UIControl> &);
		FactoryComponent(std::shared_ptr<UIControl> &);
		void _trim(void);
		void _trim(void);
		void addControlIdToTemplateName(std::string const&,std::string const&);
		void addControlIdToTemplateName(std::string const&,std::string const&);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void create(UIControlFactory &,UIPropertyBag const&);
		void create(UIControlFactory &,UIPropertyBag const&);
		void destroy(std::string const&);
		void destroy(std::string const&);
		void getControlTemplate(void);
		void getControlTemplate(void);
		void getFactoryName(void);
		void getFactoryName(void);
		void setControlTemplate(std::shared_ptr<UIControl> &);
		void setControlTemplate(std::shared_ptr<UIControl> &);
		void setFactoryIsChild(bool);
		void setFactoryIsChild(bool);
		void setFactoryName(std::string const&);
		void setFactoryName(std::string const&);
		void ~FactoryComponent();
		void ~FactoryComponent();
		void ~FactoryComponent();
		void ~FactoryComponent();
};
