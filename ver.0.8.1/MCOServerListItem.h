#pragma once
class MCOServerListItem{
	public:
		MCOServerListItem(MCOServerListItem const&);
		MCOServerListItem(MCOServerListItem&&);
		MCOServerListItem(void);
		void operator=(MCOServerListItem const&);
		void operator=(MCOServerListItem&&);
		void ~MCOServerListItem();
};
