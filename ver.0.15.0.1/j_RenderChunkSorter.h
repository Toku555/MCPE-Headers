#pragma once
namespace j{
	class RenderChunkSorter{
		public:
		void setupIndexRanges(RangeIndices *,RangeIndices *);
		void sortFaces(RenderChunk &);
	}
};
