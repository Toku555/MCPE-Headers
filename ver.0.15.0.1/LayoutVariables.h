#pragma once
class LayoutVariables{
	public:
		LayoutVariables(void);
		LayoutVariables(void);
		void _add(std::shared_ptr<UIControl> const&);
		void _add(std::shared_ptr<UIControl> const&);
		void _clear(void);
		void _clear(void);
		void _traceUnsolvableGraph(int);
		void _traceVariablesForDebugControls(void);
		void _traceVariablesForDebugControls(void);
		void invalidate(VariableRef &);
		void invalidate(VariableRef &);
		void solve(void);
		void solve(void);
};
