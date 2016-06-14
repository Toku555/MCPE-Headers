#pragma once
namespace j{
	class BaseAttributeMap{
		public:
		void getInstance(Attribute const&);
		void getInstance(std::string const&);
		void getMutableInstance(Attribute const&);
		void getMutableInstance(std::string const&);
		void onAttributeModified(AttributeInstance const&);
		void registerAttribute(Attribute const&);
	}
};
