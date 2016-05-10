#pragma once
class VisualTree{
	public:
		VisualTree(std::shared_ptr<UIControl> &);
		void addDirtyFlag(ui::DirtyFlag);
		void getClearPersistantMeshes(void);
		void getDirty(ui::DirtyFlag);
		void getDirty(void);
		void getDirtyValue(void);
		void getRootControl(void);
		void removeDirtyFlag(ui::DirtyFlag);
		void setClearPersistantMeshes(bool);
		void setDirty(bool);
		void ~VisualTree();
};
