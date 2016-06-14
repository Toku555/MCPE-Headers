#pragma once
class LayoutVariable{
	public:
		LayoutVariable(std::shared_ptr<UIControl> const&,LayoutVariableType);
		LayoutVariable(std::shared_ptr<UIControl> const&,LayoutVariableType);
		void _addDependsOnMeEntriesForInvalidation(void);
		void _addDependsOnMeEntriesForInvalidation(void);
		void _clearSatisfied(void);
		void _invalidate(std::vector<VariableRef,std::allocator<VariableRef>> &);
		void _invalidate(std::vector<VariableRef,std::allocator<VariableRef>> &);
		void _setValue(float);
		void _setValue(float);
		void addDependsOnMeVariable(VariableRef const&);
		void addDependsOnMeVariable(VariableRef const&);
		void clearOverrideValue(void);
		void clearOverrideValue(void);
		void getType(void);
		void getValue(void);
		void getValue(void);
		void initialize(void);
		void initialize(void);
		void isSatisfiable(void);
		void isSatisfiable(void);
		void isSatisfied(void);
		void isSatisfied(void);
		void overrideGridLayoutRule(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void overrideGridLayoutRule(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void overrideStackPanelLayoutRule(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void overrideStackPanelLayoutRule(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void satisfy(void);
		void satisfy(void);
		void setGridItemLayoutRule(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void setGridItemLayoutRule(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void setOverrideValue(float);
		void setOverrideValue(float);
		void setRelativeLayoutRule(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void setRelativeLayoutRule(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void setStackPanelItemLayoutRule(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void setStackPanelItemLayoutRule(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void toString(LayoutVariableStringType);
		void toString(LayoutVariableStringType);
		void ~LayoutVariable();
		void ~LayoutVariable();
};
