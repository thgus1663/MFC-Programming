#pragma once


// CSolutionDlg ��ȭ �����Դϴ�.

class CSolutionDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSolutionDlg)

public:
	CSolutionDlg(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~CSolutionDlg();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_DIALOG_SOLUTION };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnClickedButtonSolution();
	CListBox m_ListSolutionsub;
	CListBox m_ListSolutionscore;
//	afx_msg void OnLbnSelchangeListSolutionsub();
	CListBox m_listSolution;
};
