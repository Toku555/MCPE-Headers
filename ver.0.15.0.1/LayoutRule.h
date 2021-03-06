#pragma once
class LayoutRule{
	public:
		LayoutRule(void);
		LayoutRule(void);
		void addAnchorTerm(std::shared_ptr<UIControl> const&,LayoutVariableType,ui::AnchorPoint,float,LayoutRuleTermType);
		void addAnchorTerm(std::shared_ptr<UIControl> const&,LayoutVariableType,ui::AnchorPoint,float,LayoutRuleTermType);
		void addAxisOffsetTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>> const&);
		void addAxisOffsetTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,std::vector<ui::AxisOffset,std::allocator<ui::AxisOffset>> const&);
		void addDependsOnMeEntriesForInvalidation(VariableRef const&);
		void addDependsOnMeEntriesForInvalidation(VariableRef const&);
		void addDynamicGridItemGridPositionTerm(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType,ui::OrientationType,int);
		void addDynamicGridItemGridPositionTerm(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType,ui::OrientationType,int);
		void addGridItemPositionTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType,ui::OrientationType);
		void addGridItemPositionTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType,ui::OrientationType);
		void addGridItemSizeTerms(std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addGridItemSizeTerms(std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addGridSizeTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addGridSizeTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addOffsetDeltaTerm(std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addOffsetDeltaTerm(std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addRelativeToPositionTerm(std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addRelativeToPositionTerm(std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addRescalingGridDimensionTerm(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType,ui::OrientationType);
		void addRescalingGridDimensionTerm(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType,ui::OrientationType);
		void addStackPanelItemPositionTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType,ui::OrientationType);
		void addStackPanelItemPositionTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType,ui::OrientationType);
		void addStackPanelItemRemainderSizeTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addStackPanelItemRemainderSizeTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void clearTerms(void);
		void clearTerms(void);
		void compute(void);
		void compute(void);
		void getDependantVariables(void);
		void getDependantVariables(void);
		void isSatisfiable(void);
		void isSatisfiable(void);
		void toString(void);
		void toString(void);
};
