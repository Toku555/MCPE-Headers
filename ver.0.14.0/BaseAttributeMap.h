#pragma once
class BaseAttributeMap{
	public:
		void addAttributeModifier(std::string const&,std::shared_ptr<AttributeModifier>);
		void begin(void);
		void begin(void);
		void clearDirtyAttributes(void);
		void end(void);
		void end(void);
		void getDirtyAttributes(void);
		void getInstance(Attribute const&);
		void getInstance(std::string const&);
		void getMutableInstance(Attribute const&);
		void getMutableInstance(std::string const&);
		void getSyncableAttributes(void);
		void onAttributeModified(AttributeInstance const&);
		void registerAttribute(Attribute const&);
		void removeAttributeModifier(std::string const&,std::shared_ptr<AttributeModifier>);
};
