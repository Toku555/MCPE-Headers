#pragma once
class SharedAttributes{
	public:
		void _loadAttribute(AttributeInstance &,CompoundTag const*);
		void _loadAttribute(AttributeInstance &,CompoundTag const*);
		void _saveAttribute(AttributeInstance const&);
		void _saveAttribute(AttributeInstance const&);
		void _saveAttributeBuff(TemporalAttributeBuff const&);
		void _saveAttributeBuff(TemporalAttributeBuff const&);
		void _saveAttributeModifier(AttributeModifier const&);
		void _saveAttributeModifier(AttributeModifier const&);
		void loadAttributeBuff(CompoundTag const*);
		void loadAttributeBuff(CompoundTag const*);
		void loadAttributeModifier(CompoundTag const*);
		void loadAttributeModifier(CompoundTag const*);
		void loadAttributes(BaseAttributeMap *,ListTag const*);
		void loadAttributes(BaseAttributeMap *,ListTag const*);
		void saveAttributes(BaseAttributeMap *);
		void saveAttributes(BaseAttributeMap *);
};
