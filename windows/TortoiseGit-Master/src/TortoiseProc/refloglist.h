// TortoiseGit - a Windows shell extension for easy version control

// Copyright (C) 2009-2011, 2015-2016 - TortoiseGit

// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software Foundation,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
#pragma once
#include "GitLoglist.h"

class CGitLogListBase;

class CRefLogList : public CGitLogList
{
	DECLARE_DYNAMIC(CRefLogList)
public:
	CRefLogList();
	void InsertRefLogColumn();
	enum
	{
		REFLOG_HASH,
		REFLOG_REF,
		REFLOG_ACTION,
		REFLOG_MESSAGE,
		REFLOG_DATE,
	};

	std::vector<GitRevLoglist> m_RevCache;

protected:
	virtual void OnLvnGetdispinfoLoglist(NMHDR *pNMHDR, LRESULT *pResult);
	virtual void OnNMCustomdrawLoglist(NMHDR *pNMHDR, LRESULT *pResult);
	virtual BOOL OnToolTipText(UINT id, NMHDR* pNMHDR, LRESULT* pResult);
};