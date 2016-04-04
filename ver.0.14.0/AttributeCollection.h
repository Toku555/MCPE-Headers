#pragma once
class AttributeCollection{
	public:
		void addAttribute(std::string const&,Attribute *);
		void getAttribute(std::string const&);
		void ~AttributeCollection();
};
