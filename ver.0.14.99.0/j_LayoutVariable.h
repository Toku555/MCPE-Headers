#pragma once
namespace j{
	class LayoutVariable{
		public:
		void _setValue(float);
		void addDependsOnMeVariable(VariableRef const&);
		void initialize(void);
		void setOverrideValue(float);
		void setRelativeLayoutRule(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
	}
};
