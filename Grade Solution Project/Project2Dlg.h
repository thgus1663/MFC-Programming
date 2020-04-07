
// Project2Dlg.h : 헤더 파일
//

#pragma once
#include "solutiondlg.h"


// CProject2Dlg 대화 상자
class CProject2Dlg : public CDialogEx
{
// 생성입니다.
public:
	CProject2Dlg(CWnd* pParent = NULL);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
	enum { IDD = IDD_PROJECT2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnCbnSelchangeCombo33();
	CButton m_CheckP1;
	CButton m_CheckP2;
	CButton m_CheckP3;
	CButton m_CheckP4;
	CButton m_CheckP5;
	CButton m_CheckP6;
	CButton m_CheckS1;
	CButton m_CheckS10;
	CButton m_CheckS11;
	CButton m_CheckS12;
	CButton m_CheckS13;
	CButton m_CheckS14;
	CButton m_CheckS15;
	CButton m_CheckS16;
	CButton m_CheckS17;
	CButton m_CheckS18;
	CButton m_CheckS19;
	CButton m_CheckS2;
	CButton m_CheckS20;
	CButton m_CheckS21;
	CButton m_CheckS22;
	CButton m_CheckS23;
	CButton m_CheckS24;
	CButton m_CheckS25;
	CButton m_CheckS26;
	CButton m_CheckS27;
	CButton m_CheckS28;
	CButton m_CheckS29;
	CButton m_CheckS3;
	CButton m_CheckS4;
	CButton m_CheckS5;
	CButton m_CheckS6;
	CButton m_CheckS7;
	CButton m_CheckS8;
	CButton m_CheckS9;
	afx_msg void OnSelchangeComboP1();
	CComboBox m_ComboP1;
	CComboBox m_ComboP2;
	CComboBox m_ComboP3;
	CComboBox m_ComboP4;
	CComboBox m_ComboP5;
	CComboBox m_ComboP6;
	double m_nPreScore;
	double m_nScoreP1;
	double m_nScoreP2;
	double m_nScoreP3;
	double m_nScoreP4;
	double m_nScoreP5;
	double m_nScoreP6;
	double m_nScoreS1;
	double m_nScoreS2;
	double m_nScoreS3;
	double m_nScoreS4;
	double m_nScoreS5;
	double m_nScoreS6;
	double m_nScoreS7;
	double m_nScoreS8;
	double m_nScoreS9;
	double m_nScoreS10;
	double m_nScoreS11;
	double m_nScoreS12;
	double m_nScoreS13;
	double m_nScoreS14;
	double m_nScoreS15;
	double m_nScoreS16;
	double m_nScoreS17;
	double m_nScoreS18;
	double m_nScoreS19;
	double m_nScoreS20;
	double m_nScoreS21;
	double m_nScoreS22;
	double m_nScoreS23;
	double m_nScoreS24;
	double m_nScoreS25;
	double m_nScoreS26;
	double m_nScoreS27;
	double m_nScoreS28;
	double m_nScoreS29;
	afx_msg void OnSelchangeComboP2();
	afx_msg void OnSelchangeComboP3();
	afx_msg void OnSelchangeComboP4();
	afx_msg void OnSelchangeComboP5();
//	afx_msg void OnSelchangeComboP6();
	afx_msg void OnSelchangeComboP6();
	afx_msg void OnSelchangeComboS1();
	CComboBox m_ComboS1;
	CComboBox m_ComboS10;
	CComboBox m_ComboS11;
	CComboBox m_ComboS12;
	CComboBox m_ComboS13;
	CComboBox m_ComboS14;
	CComboBox m_ComboS15;
	CComboBox m_ComboS16;
	CComboBox m_ComboS17;
	CComboBox m_ComboS18;
	CComboBox m_ComboS19;
	CComboBox m_ComboS2;
	CComboBox m_ComboS20;
	CComboBox m_ComboS21;
	CComboBox m_ComboS22;
	CComboBox m_ComboS23;
	CComboBox m_ComboS24;
	CComboBox m_ComboS25;
	CComboBox m_ComboS26;
	CComboBox m_ComboS27;
	CComboBox m_ComboS28;
	CComboBox m_ComboS29;
	CComboBox m_ComboS3;
	CComboBox m_ComboS4;
	CComboBox m_ComboS5;
	CComboBox m_ComboS6;
	CComboBox m_ComboS7;
	CComboBox m_ComboS8;
	CComboBox m_ComboS9;
	afx_msg void OnSelchangeComboS2();
	afx_msg void OnSelchangeComboS3();
	afx_msg void OnSelchangeComboS4();
	afx_msg void OnSelchangeComboS5();
	afx_msg void OnSelchangeComboS6();
	afx_msg void OnSelchangeComboS7();
	afx_msg void OnSelchangeComboS8();
	afx_msg void OnSelchangeComboS9();
	afx_msg void OnSelchangeComboS10();
	afx_msg void OnSelchangeComboS11();
	afx_msg void OnSelchangeComboS12();
	afx_msg void OnSelchangeComboS13();
	afx_msg void OnSelchangeComboS14();
	afx_msg void OnSelchangeComboS15();
	afx_msg void OnSelchangeComboS16();
	afx_msg void OnSelchangeComboS17();
	afx_msg void OnSelchangeComboS18();
	afx_msg void OnSelchangeComboS19();
	afx_msg void OnSelchangeComboS20();
	afx_msg void OnSelchangeComboS21();
	afx_msg void OnSelchangeComboS22();
	afx_msg void OnSelchangeComboS23();
	afx_msg void OnSelchangeComboS24();
	afx_msg void OnSelchangeComboS25();
	afx_msg void OnSelchangeComboS26();
	afx_msg void OnSelchangeComboS27();
	afx_msg void OnSelchangeComboS28();
	afx_msg void OnSelchangeComboS29();
	afx_msg void OnRadioDeepmajor();
	afx_msg void OnRadioOthermajor();
	afx_msg void OnClickedButtonCalc();
	int m_nCountP;
	int m_nCountS;
	int m_nPLeave;
	int m_nSLeave;
	
	
	int m_nMajorDeepOrOther;
	double m_nPScore;
	double m_nSScore;
	CListBox m_ListAble;
	CListBox m_ListWill;
	afx_msg void OnSelchangeComboMove();
	CComboBox m_cbMove;
	afx_msg void OnClickedButtonSol();
	double m_dGoalscore;
	double m_dLeavescore;
	bool m_bViewSolution;
	CSolutionDlg m_dlgSolution;
	double m_dSubjectPart1;
	double m_dSubjectPart2;
	double m_dSubjectPart3;
	double m_dSubjectPart4;
	CButton m_CheckS30;
	CComboBox m_ComboS30;
	double m_nScoreS30;
	afx_msg void OnSelchangeComboS30();
	double m_dSubjectPart5;
	double m_dSubjectPart6;
	double m_dSubjectPart7;
	int m_nPart1;
	int m_nPart2;
	int m_nPart3;
	int m_nPart4;
	int m_nPart5;
	int m_nPart6;
	int m_nPart7;
	double m_listBestPart[7];
	CString m_listBestPartCString[7];
	int m_listBestPartInt[7];
};
