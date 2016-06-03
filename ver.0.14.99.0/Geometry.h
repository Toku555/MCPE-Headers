#pragma once
class Geometry{
	public:
		Geometry(std::string const&,Geometry const&,int,int);
		Geometry(std::string const&,Geometry const&,int,int);
		Geometry(std::string const&,int,int);
		Geometry(std::string const&,int,int);
		void _parseNodes(Json::Value);
		void _parseNodes(Json::Value);
		void getNode(std::string const&);
		void getNode(std::string const&);
		void parse(Json::Value);
		void parse(Json::Value);
};
