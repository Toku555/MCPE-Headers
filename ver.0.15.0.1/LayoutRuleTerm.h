#pragma once
class LayoutRuleTerm{
	public:
		LayoutRuleTerm(LayoutRuleTerm const&);
		LayoutRuleTerm(LayoutRuleTerm const&);
		LayoutRuleTerm(VariableRef const&,float,LayoutRuleTermType);
		LayoutRuleTerm(float,LayoutRuleTermType);
		LayoutRuleTerm(std::initializer_list<VariableRef>,float,LayoutRuleTermType);
		LayoutRuleTerm(std::initializer_list<VariableRef>,float,LayoutRuleTermType);
		void function<float ();
		void function<float ();
		void addDependsOnMeEntriesForInvalidation(VariableRef const&);
		void addDependsOnMeEntriesForInvalidation(VariableRef const&);
		void compute(void);
		void gatherDependentVariables(std::vector<VariableRef,std::allocator<VariableRef>> &);
		void gatherDependentVariables(std::vector<VariableRef,std::allocator<VariableRef>> &);
		void getConstant(void);
		void getFactor(void);
		void getType(void);
		void isSatisfiable(void);
		void isSatisfiable(void);
		void isZeroTerm(void);
		void toString(void);
		void toString(void);
};
