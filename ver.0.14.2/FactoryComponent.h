#pragma once
class FactoryComponent{
	public:
		FactoryComponent(std::shared_ptr<UIControl> &);
		void _trim(void);
		void clone(std::shared_ptr<UIControl> &);
		void destroy(std::string const&);
		void setControlTemplateName(std::string const&);
		void ~FactoryComponent();
		void ~FactoryComponent();
};
