#pragma once
namespace j{
	class LayoutRule{
		public:
		void addGridItemSizeTerms(std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addGridSizeTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addOffsetDeltaTerm(std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addRelativeToPositionTerm(std::shared_ptr<UIControl> const&,LayoutVariableType);
		void addStackPanelItemRemainderSizeTerms(std::shared_ptr<UIControl> const&,std::shared_ptr<UIControl> const&,LayoutVariableType);
	}
};
