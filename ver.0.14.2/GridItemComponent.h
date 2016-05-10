#pragma once
class GridItemComponent{
	public:
		GridItemComponent(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getCollectionIndex(void);
		void getGridPosition(void);
		void setCollectionIndex(int);
		void setGridPosition(glm::detail::tvec2<int> const&);
		void ~GridItemComponent();
		void ~GridItemComponent();
};
