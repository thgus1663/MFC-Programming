#pragma once


// CSolutionDlg 대화 상자입니다.

class CSolutionDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSolutionDlg)

public:
	CSolutionDlg(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CSolutionDlg();

// 대화 상자 데이터입니다.
	enum { IDD = IDD_DIALOG_SOLUTION };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButtonSolution();
	CListBox m_ListSolutionsub;
	CListBox m_ListSolutionscore;
//	afx_msg void OnLbnSelchangeListSolutionsub();
	CListBox m_listSolution;
};
