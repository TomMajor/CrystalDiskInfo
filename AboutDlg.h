﻿/*---------------------------------------------------------------------------*/
//       Author : hiyohiyo
//         Mail : hiyohiyo@crystalmark.info
//          Web : https://crystalmark.info/
//      License : The MIT License
/*---------------------------------------------------------------------------*/

#pragma once
#include "DialogFx.h"
#include "StaticFx.h"
#include "ButtonFx.h"

class CAboutDlg : public CDialogFx
{
	DECLARE_DYNCREATE(CAboutDlg)

#ifdef SUISHO_SHIZUKU_SUPPORT
	static const int SIZE_X = 640;
	static const int SIZE_Y = 660;
#else
	static const int SIZE_X = 480;
	static const int SIZE_Y = 172;
#endif

public:
	CAboutDlg(CWnd* pParent = NULL);
	virtual ~CAboutDlg();

	enum { IDD = IDD_ABOUT };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);
	virtual BOOL OnInitDialog();
	virtual void UpdateDialogSize();

	DECLARE_MESSAGE_MAP()
#ifdef SUISHO_SHIZUKU_SUPPORT
	afx_msg void OnSecretVoice();
#endif
	afx_msg void OnCrystalDewWorld();
	afx_msg void OnVersion();
	afx_msg void OnLicense();
	afx_msg void OnProjectSite1();
	afx_msg void OnProjectSite2();
	afx_msg void OnProjectSite3();
	afx_msg void OnProjectSite4();
	afx_msg void OnProjectSite5();

	CButtonFx m_CtrlCrystalDewWorld;
	CButtonFx m_CtrlSecretVoice;
	CButtonFx m_CtrlProjectSite1;
	CButtonFx m_CtrlProjectSite2;
	CButtonFx m_CtrlProjectSite3;
	CButtonFx m_CtrlProjectSite4;
	CButtonFx m_CtrlProjectSite5;
	CButtonFx m_CtrlVersion;
	CButtonFx m_CtrlLicense;

	CStaticFx m_CtrlEdition;
	CStaticFx m_CtrlRelease;
	CStaticFx m_CtrlCopyright;
};
