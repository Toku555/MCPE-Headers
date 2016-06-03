#pragma once
class GeometryGroup{
	public:
		GeometryGroup(void);
		GeometryGroup(void);
		void _addRef(GeometryPtr &);
		void _addRef(GeometryPtr &);
		void _getParent(std::string const&);
		void _getParent(std::string const&);
		void _removeRef(GeometryPtr &);
		void _removeRef(GeometryPtr &);
		void buildInheritanceTree(std::string const&,InheritanceTree<GeometryGroup::ModelParent> &);
		void buildInheritanceTree(std::string const&,InheritanceTree<GeometryGroup::ModelParent> &);
		void getGeometry(std::string const&);
		void getGeometry(std::string const&);
		void loadModelPackFiles(void);
		void loadModelPackFiles(void);
		void loadModels(InheritanceTree<GeometryGroup::ModelParent> &);
		void loadModels(InheritanceTree<GeometryGroup::ModelParent> &);
		void tryGetGeometry(std::string const&);
		void tryGetGeometry(std::string const&);
		void unloadGeometries(void);
		void unloadGeometries(void);
		void ~GeometryGroup();
		void ~GeometryGroup();
		void ~GeometryGroup();
		void ~GeometryGroup();
};
