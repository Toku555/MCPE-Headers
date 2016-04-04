#pragma once
class PathFinder{
	public:
		PathFinder(BlockSource *,bool,bool,bool,bool);
		void _classifyNode(Entity *,BlockPos const&,BlockID,BlockPos const&);
		void _classifyNode(Entity *,BlockPos const&,BlockPos const&);
		void _findNearestPathableNeighbor(BlockPos &,Entity *,BlockPos const&);
		void _isFree(Entity *,BlockPos const&,BlockPos const&,Node *);
		void _reconstructPath(Node *,Node *);
		void findPath(Entity *,Entity *,float);
		void findPath(Entity *,Node *,Node *,Node *,float);
		void findPath(Entity *,float,float,float,float);
		void findPath(Entity *,int,int,int,float);
		void getNeighbors(Entity *,Node *,Node *,Node *,float);
		void getNode(Entity *,BlockPos const&,int,int,int,Node *,int);
		void getNode(int,int,int);
		void ~PathFinder();
};
