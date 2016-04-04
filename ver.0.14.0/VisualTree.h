#pragma once
class VisualTree{
	public:
		VisualTree(std::shared_ptr<UIControl> &);
		void addDirtyFlag(UI::DirtyFlag);
		void getClearPersistantMeshes(void);
		void getDirty(UI::DirtyFlag);
		void getDirty(void);
		void getDirtyValue(void);
		void getRootControl(void);
		void removeDirtyFlag(UI::DirtyFlag);
		void setClearPersistantMeshes(bool);
		void setDirty(bool);
		void ~VisualTree();
};
