
// MFCFINALPRJECTDlg.h : header file
//

#pragma once
#include "Manager.h"
// CMFCFINALPRJECTDlg dialog
class CMFCFINALPRJECTDlg : public CDialogEx
{
// Construction
public:
	CMFCFINALPRJECTDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCFINALPRJECT_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	void UpdateList(int i);
	bool isSavePressed;
	bool isAddOrDelete; // 0 ADD 1 DELETE
	bool isPressedADD;

	Manager m;
	CEdit pc1;
	CString pt2;
	CEdit pc3;
	CString pt4;
	CString pt5;
	double ppd1;
	double ppd2;
	double ppd3;
	double ppd4;
	double ppd5;
	CString tt1;
	CEdit tc2;
	CString tt3;
	CString tt4;
	CString tt5;
	CString gt4;
	afx_msg void OnBnClickedButton2();
	CString pt1;
	CEdit pc2;
	CString pt3;
	CEdit pc4;
	CEdit pc5;
	CEdit pcd1;
	CEdit pcd2;
	CEdit pcd3;
	CEdit pcd4;
	CEdit pcd5;
	CEdit tc1;
	CString tt2;
	CEdit tc3;
	CEdit tc4;
	CEdit tc5;
	CEdit gcd1;
	CString gtd1;
	CEdit gcd2;
	CString gtd2;
	CEdit gcd3;
	CString gtd3;
	CEdit gcd4;
	CString gtd4;
	CString gtd5;
	CEdit gcd5;
	CEdit dc1;
	CString dv1;
	CEdit dc2;
	CString dv2;
	CEdit dc3;
	CString dv3;
	CEdit dc4;
	CString dv4;
	CEdit dc5;
	CString dv5;

	afx_msg void OnBnClickedButton1();
	CString mstr;
	afx_msg void OnCbnSelchangeCombo2();
	CComboBox list1;
	afx_msg void OnBnClickedCheck2();
	BOOL TEST1;
	BOOL TEST2;
	BOOL TEST3;
	BOOL TEST4;
	BOOL TEST5;
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedCheck5();
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnBnClickedCheck6();
	afx_msg void OnCbnSelchangeCombo1();
	CComboBox sortControl;
	int pv1;
	int pv2;
	int pv3;
	int pv4;
	int pv5;
	CEdit ipc1;
	CEdit ipc2;
	CEdit ipc3;
	CEdit ipc4;
	CEdit ipc5;
	afx_msg void OnBnClickedCheck7();
	BOOL checkToday1;
	BOOL checkToday2;
	BOOL checkToday3;
	BOOL checkToday4;
	BOOL checkToday5;
	afx_msg void OnBnClickedCheck8();
	afx_msg void OnBnClickedCheck10();
	afx_msg void OnBnClickedCheck9();
	afx_msg void OnBnClickedCheck11();
	afx_msg void OnBnClickedButton3();



	afx_msg void OnBnClickedCheck12();
	BOOL checkGeneral1;
	BOOL checkGeneral2;
	BOOL checkGeneral3;
	BOOL checkGeneral4;
	BOOL checkGeneral5;
	afx_msg void OnBnClickedCheck13();
	afx_msg void OnBnClickedCheck15();
	afx_msg void OnBnClickedCheck14();
	afx_msg void OnBnClickedCheck16();
	afx_msg void OnBnClickedButton4();

	BOOL isPressedInfo;
	BOOL isListInfoPressed;
	BOOL isPrssedRemove;
	BOOL isListRemovePressed;
	afx_msg void OnCbnSelchangeCombo3();
	CComboBox cInfo1List;
	CComboBox cInfo2List;
	afx_msg void OnCbnSelchangeCombo4();
	afx_msg void OnCbnSelchangeCombo5();
	CButton removeControl;
	CComboBox removeL1;
	CComboBox removeL2;
	afx_msg void OnCbnSelchangeCombo6();
	afx_msg void OnBnClickedCheck0();
	afx_msg void OnBnClickedButton();
	afx_msg void OnBnClickedButton6();
};
